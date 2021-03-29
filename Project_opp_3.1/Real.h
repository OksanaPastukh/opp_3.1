#pragma once
#include "Number.h"
class Real : public Number
{
public:
	Real(const double y = 0);
	Real(const Real&);
	~Real();

	friend ostream& operator << (ostream& out, const Real& r);
	friend istream& operator >> (istream& in, Real& r);
	operator string () const;

	
	friend double operator ^ (const Real&, double value);
	static double Power(double value);
};

