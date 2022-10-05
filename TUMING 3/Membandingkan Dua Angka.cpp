#include <iostream>
using namespace std;

int main() {
    int val1, val2;
    cin >> val1 >> val2;
    
    if (val1 < 1 || val1 > 100 || val2 < 1 || val2 > 100) {
        cout << "INPUTAN SALAH";
        return 0;
    }
        
        
    if (val1 == val2) {
        cout << val1 << " == " << val2 << endl;
    }
        
    if (val1 != val2) {
        cout << val1 << " != " << val2 << endl;
    }
    
    if (val1 < val2) {
        cout << val1 << " < " << val2 << endl;
    }
    
    if (val1 <= val2) {
        cout << val1 << " <= " << val2 << endl;
    }
    
    if (val1 > val2) {
        cout << val1 << " > " << val2 << endl;
    }
    
    if (val1 >= val2) {
        cout << val1 << " >= " << val2 << endl;
    }
    
    return 0;
}
