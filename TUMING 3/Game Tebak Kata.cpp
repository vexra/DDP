#include <iostream>
using namespace std;

int main() {
    int val;
    string str, tmp;
    
    cin >> val;
    cin >> str;

    if (val > 10 || val <= 0) {
        cout << "INPUTAN SALAH";
        return 0;
    }

    while (val--) {
        cin >> tmp;
        
        if (str == tmp) {
            cout << "MENANG " << val+1;
            return 0;
        }
    }
    
    cout << "KALAH 0";
    
    return 0;
}
