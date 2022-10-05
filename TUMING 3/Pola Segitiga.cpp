#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int dasar = n*2-3;
    int mid = (dasar+1)/2;
    int maxStar = 1;
    
    cout << endl;
    for (int row = 1; row < n; row++) {
        for (int space = 1; space < mid; space++) {
            cout << " ";
        }
        
        for (int star = 1; star <= maxStar; star++) {
            cout << "*";
        }
        cout << endl;
        mid--;
        maxStar += 2;
    }
    return 0;
}
