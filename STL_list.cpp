#include <iostream>
#include <list>

using namespace std;

int main () {
    list<int>paths;
    
    paths.push_back(1);
    paths.push_back(1);
    paths.push_back(8);
    paths.push_back(7);
    paths.push_back(2);
    paths.push_back(3);
    paths.push_back(4);
    paths.push_back(5);
    paths.push_back(4);
    paths.push_back(20);
    paths.push_back(43);
    paths.push_back(11);
 
    paths.sort();
    paths.unique();
    
    for(list<int>::iterator list_iter = paths.begin(); list_iter!=paths.end(); list_iter++) {
            cout << *list_iter << endl;
        } 

    return 0;    
}
