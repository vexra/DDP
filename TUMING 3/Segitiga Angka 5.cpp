#include <iostream>
using namespace std;

int main() {
    int val;
    cin >> val;
    
    for (int i = 0; i < val; i++) {
        for (int k = 0; k < i; k++) {
            cout << "  ";
        }
        
        for (int j = val; j > i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
