#include <iostream>
#include <map>

using namespace std;

int main () {
    map <string, int>high_scores;
    
    high_scores["Cheater"] = 999;
    high_scores["Bob"] = 998;
    high_scores["Les"] = 549;
    
    if (high_scores.find("Jim") == high_scores.end()) {
      cout << "Jim is not in the high_scores" << endl;
    }
    cout << high_scores.begin()->second << endl;
    
    return 0;    
}
