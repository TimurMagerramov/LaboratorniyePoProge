#include <iostream>
#include <conio.h>
#include <clocale>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int n, j = 0;
	char s;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> s;
		if (s != ' ')
			++j;
		else
			j = 0;
	}
	cout << j << endl;
	_getch();
}