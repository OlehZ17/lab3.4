// lab3.4.cpp
// Зварича Олега
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((x * x + y * y <= R * R && x <= 0 && y >= 0) || 
		(y <= 2 * abs(x - (R / 2)) - R && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}