#include <iostream>
using namespace std;

int main() {
    int val, first = 0, second = 1, curr;
    cin >> val;
    
    for(int i = 1; i <= val; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        curr =  first + second;
        cout << curr << " ";
        first = second;
        second = curr;
        
    }
    return 0;
}
