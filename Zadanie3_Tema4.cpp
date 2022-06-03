#include <iostream>
#include <conio.h>
#include <clocale>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
int sumcif(int x);
int main() {
	setlocale(LC_ALL, "Russian_Russia.1251");
	int a;
	cin >> a;
	cout << sumcif(a);
	_getch();
}

int sumcif(int x) {
	if (x == 0)
		return 0;
	return (x % 10 + sumcif(x / 10));
}