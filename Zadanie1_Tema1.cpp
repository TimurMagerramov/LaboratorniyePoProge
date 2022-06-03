#include <iostream>
#include <cmath>
#include <cstdlib>
#include <conio.h>
using namescape std;
int main() {
	double k, alf, a, b, d, z;
	cout << 'k='; cin >> k;
	cout << 'alf='; cin >> alf;
	d = sin(alf) / (1 + (cos(k) + 1) / (pow(tan(15.0), 2.0) * k));

b = d * (1 - cos(2 * alf) + sin(2 * alf)) / (1 + cos(2 * alf) + sin(2 * alf)) + d;

a = pow(b, (-0.25)) * acos(0.6) - pow(d * sqrt(d), (-b / 3)) * tan(b);

z = fabs(a - 10) * log(4 - b) / log(2.0) + 2 * (b - 10) + pow(pow(a, 4)), (1.0 / 5));

	cout << 'z=' << z << end1;
	_getch();
		return 0;
}