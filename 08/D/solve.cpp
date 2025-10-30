#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        char upperC;

        if (c == 'z') {
            upperC = 'A';
        } else {
            upperC = toupper(c + 1);
        }
        
        cout << upperC;
    }
    cout << endl;
}
