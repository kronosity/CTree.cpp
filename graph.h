#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
//edge and node vertices graph class (aka spider graph)
struct vertex {
    typedef pair <int, vertex* > v;
    vector<v> adj;
    
    string name;
    vertex(string s) {name = s;}            
};
 class graph {
        public:
            typedef map<string, vertex*> vmap;
            vmap work;
           
            void add_vertex(const string& );
            void add_edge(const string& from, const string& to, double cost); 
    };    
    void graph::add_vertex(const string &name) {     
        vmap::iterator itr = work.begin();
        itr = work.find(name);
    
        if (itr == work.end() ) {
            vertex *v;
            v = new vertex(name);
            work[name] = v;
            return;
      }
    cout << "\n Vertex already exists";
}
    void graph::add_edge(const string& from, const string& to, double cost) {
        vertex *f = (work.find(from)->second);
        vertex *t = (work.find(to)->second);
        pair<int, vertex *> edge = make_pair(cost, t);
        f->adj.push_back(edge);
    }
