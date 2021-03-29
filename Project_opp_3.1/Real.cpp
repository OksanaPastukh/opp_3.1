#define _USE_MATH_DEFINES
#include "Real.h"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

Real::Real(const double y)
{
	double x = y;
	SetX(x);
}
Real::Real(const Real& r)
{
	double x = r.GetX();
	SetX(x);
}
Real::~Real()
{}

Real::operator string () const
{
	stringstream ss;
	ss << "Value is " << GetX() << endl;
	return ss.str();

}
ostream& operator << (ostream& out, const Real& r)
{
	return out << (string)r;
}
istream& operator >> (istream& in, Real& r)
{
	double x;
	cout << " Enter the value =  ";in >> x;
	r.SetX(x);
	return in;
}

double operator ^(const Real& r, double value)
{
	double result;
	if (r.GetX() < 0)
	{
		return 0;
	}
	else if (value == 0)
	{
		result = 1;
	}
	else
	{
		result = pow(r.GetX(), 1 / value);
	}
	return result;
}
double Real::Power(double value)
{
	return pow(M_PI, value);
}