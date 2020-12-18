#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
	float a, b, c;

	cout << "Masukkan Nilai Pertama   : "; cin >> a;
	cout << "Masukkan Nilai Kedua     : "; cin >> b;
	
	c = a * b;

	cout << setiosflags(ios::fixed);
	cout << setprecision(1) << c << endl;
	cout << setprecision(2) << c << endl;
	cout << setprecision(3) << c << endl;
	cout << setprecision(4) << c << endl;
	cout << setprecision(5) << c << endl;

	_getch();
	return 0;
}