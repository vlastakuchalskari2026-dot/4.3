// Lab_04_3.cpp
// Кучальська Власта
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 13
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double F, x, xp, xk, dx, a, b, c;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|  " << setw(5) << "x" << " |   "
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x - 1 < 0 && b - x != 0 )
			F = a * pow(x, 2) + b;
		else
			if (x - 1 > 0 && b + x == 0)
				F = (x - a) / x;
			else
				F = x / c;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
