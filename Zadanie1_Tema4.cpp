#include <iostream>
#include <conio.h>
#include <clocale>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
int h(int a, int b);
int max(int a, int b);
int main() {
	setlocale(LC_ALL, "Russian_Russia.1251");
	int s, t, f;
	cin >> s >> t;
	f = h(s, t) + max(pow(h(s - t, s * t), 2), pow(h(s - t, s + t), 4)) + h(1, 1);
	cout << f << endl;
	_getch();
}

int max(int a, int b) {
	int c;
	if (a > b)
		c = a;
	else c = b;
	return c;
}

int h(int a, int b) {
	int hh = 0;
	hh = (a / (1 + b * b) + (b / (1 + a * a)) - (a - b * b * b));
	return hh;
}