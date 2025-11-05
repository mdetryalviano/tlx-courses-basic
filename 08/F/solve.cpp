#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    vector<long long> ns;
    long long r;

    for (int i = 0; i < data.size(); i++) {
        ns.push_back(stoll(data[i]));
    }

    if (op == '+') {
        r = 0;
        for (int n : ns) {
            r += n;
        }
    } else if (op == '*') {
        r = 1;
        for (int n : ns) {
            r *= n;
        }
    } else {
        return "KESALAHAN";
    }

    return to_string(r);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
