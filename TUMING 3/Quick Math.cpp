#include <iostream>
using namespace std;


int main() {
    double val, tmp = 0;
    cin >> val;
    
    tmp = val+val;
    cout << val << " plus " << val << " is " << tmp << endl;
    tmp -= 1;
    cout << "Minus one is " << tmp << endl;
    tmp *= 3;
    cout << "Multiple three is " << tmp << endl;
    tmp /= 2;
    cout << "divide two is " << tmp << endl;
       
    return 0;
}
