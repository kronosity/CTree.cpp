#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    unordered_map<string, string>hashtable;
    
    hashtable.emplace("Robert", "16ms");
    hashtable.emplace("Steve", "11ms");
    hashtable.emplace("David", "6ms");
    hashtable.emplace("Andy", "56ms");
    hashtable.emplace("Nigel", "999ms");
    
    cout << "Andy's Ping time in milliseconds: "  << hashtable["Andy"];
    cout << endl << "--------------------------" << endl;
    
    hashtable.insert(make_pair("Corey", "51ms"));
    cout << endl << "Ping time of all players on the server" << endl;
     cout << "--------------------------" << endl;
    
    for (auto &i : hashtable) {
        cout << i.first << ": " << i.second << endl;
    }
    return 0;
}
