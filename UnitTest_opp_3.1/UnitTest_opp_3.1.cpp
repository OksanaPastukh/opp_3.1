#include "pch.h"
#include "CppUnitTest.h"
#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES
#include <cmath>
#include "../Project_opp_3.1/Real.cpp"
#include "../Project_opp_3.1/Number.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp31
{
	TEST_CLASS(UnitTestopp31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Real r;
			c = r.Power(0);
			Assert::AreEqual(c, 1.0);
		}
	};
}
