#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  queue<string> gameConsoles;
    gameConsoles.push("Switch");
    gameConsoles.push("Wii U");
    gameConsoles.push("Wii");
    gameConsoles.push("Gamecube");
    gameConsoles.push("N64");
    gameConsoles.push("SNES");
    gameConsoles.push("NES");
       
cout << "Current Nintendo game console " << gameConsoles.front() << endl;
cout << "First Nintendo game console " << gameConsoles.back() << endl;


return 0;
}
