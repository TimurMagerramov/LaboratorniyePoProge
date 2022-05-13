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
	int i;
	cin >> i;
	switch (i)
	{
	case 1: cout << "December - 31\nJanuary - 31\nFebruary - 28"; break;
	case 2: cout << "March - 31\nApril - 30\nMay - 31"; break;
	case 3: cout << "June - 30\nJuly - 31\nAugust - 31"; break;
	case 4: cout << "September - 30\nOctober - 31\nNovember - 30"; break;
	default: cout << "Vvedeni neverniye danniye" << endl; break;
	}
	_getch();
}