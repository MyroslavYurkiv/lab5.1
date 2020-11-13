#include <iostream>
#include <cmath>
using namespace std;
double p(const double x); 
int main()
{
	double s;
		cout << "s = "; cin >> s;
	double c =  (pow(p(1 + 2 * s + pow(s, 2)), 2) - pow(p(1 + 3 * s + pow(s, 3)), 3)) / 1 + sqrt(p(s) + pow(p(s), 4));
	cout << "c = " << c << endl;
	return 0;
}
double p(const double x) 
{
	return (1 + (x * x) / (2) + pow(x, 4) / 4);
}