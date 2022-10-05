#include <iostream>
using namespace std;

int main() {
    int val;
    cin >> val;
    
    for (int i = val; i > 0; i--) {
        if (val % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
