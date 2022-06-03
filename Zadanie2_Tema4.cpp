#include <iostream>
#include <conio.h>
#include <clocale>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
void drob(int& a, int& b, int& c, int& d);
void socr(int& a, int& b);

int main() {
	setlocale(LC_ALL, "Russian_Russia.1251");
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	drob(a, b, c, d);
	socr(a, b);
	cout << a << "/" << b << endl;
	_getch();
}

void drob(int& a, int& b, int& c, int& d) {
	a *= d;
	c *= b;
	b *= d;
	a -= c;
}

void socr(int& a, int& b)
{
	for (int i = a; i >= 1; --i)
		if ((b % i == 0) && (a % i == 0))
		{
			b /= i;
			a /= i;
		}
}