// lab3.4.cpp
// ������� �����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	if ((x * x + y * y <= R * R && x <= 0 && y >= 0) || 
		(y <= 2 * abs(x - (R / 2)) - R && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}