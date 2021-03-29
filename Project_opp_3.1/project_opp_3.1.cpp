#include "Real.h"
#include<iostream>
using namespace std;

int main()
{
	Real c;
	cin >> c;
	cout << c << endl;
	Real k;
	cin >> k;
	cout << k << endl;
	Number d = c - k;
	Number f = k * c;
	cout << " Remove " << d << endl;
	cout << " Multiplication  " << f << endl;
	Real r;
	cin >> r;
	cout << r << endl;
	double value;
	double power;
	cout << " Enter the power for the roots = "; cin >> value;
	double g = r ^ value;
	cout << "The root of a given power = " << g << endl;
	cout << " Enter the power  = "; cin >> power;
	cout << "Pi to the power equals  =  " << r.Power(power) << endl;
	cin.get();
}