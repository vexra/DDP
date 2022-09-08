#include <iostream>
// Vex corp
using namespace std;

int main()
{
	int angkatan;
        string jurusan;

        cin >> angkatan;
        cin.ignore();
        getline(cin, jurusan);

	cout << "angkatan: " << angkatan << endl;
        cout << "jurusan: " << jurusan << endl;
	
	return 0;
}
