// Source.cpp
// Капанайко Арсен
// Лабораторна робота № 5.4
// Обчислення сум та добутків за допомогою рекурсії
// Варіант 9

#include <iostream>
#include <cmath>
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int l)
{
	double s = 0;
	for (int i = l; i <= 15; i++)
		s += (sin(10. * i) + cos(10. / i)) / sqrt(i);
	return s;
}
double S1(const int l,const int k)
{
	if (k > 15)
		return 0;
	else
		return (sin(10. * k) + cos(10. / k)) / sqrt(k) + S1(l, k + 1);
}
double S2(const int l, const int k)
{
	if (k < l)
		return 0;
	else
		return (sin(10. * k) + cos(10. / k)) / sqrt(k) + S2(l, k - 1);
}
double S3(const int l, const int k, double t) 
{
	t = t + (sin(10. * k) + cos(10. / k)) / sqrt(k);
	if (k >= 15)
		return t;
	else
		return S3(l, k + 1, t);
}
double S4 (const int l, const int k, double t)
{
	t = t + (sin(10. * k) + cos(10. / k)) / sqrt(k);
	if (k <= l)
		return t;
	else
		return S4(l, k - 1, t);
}
int main()
{
	int l;
	cout << "l = "; cin >> l;
	cout << "(iter) S0 = " << S0(l) << endl;
	cout << "(rec up ++) S1 = " << S1(l,l) << endl;
	cout << "(rec up --) S2 = " << S2(l,15) << endl;
	cout << "(rec down ++) S3 = " << S3(l,l,0) << endl;
	cout << "(rec down --) S4 = " << S4(l, 15, 0) << endl;
	return 0;
}