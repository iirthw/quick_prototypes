#pragma once

#include <cmath>

namespace util
{
	inline bool isZero(double x)
	{
		return isEqual(x, 0.0);
	}

	inline bool isEqual(double x, double y)
	{
		// See https://isocpp.org/wiki/faq/newbie#floating-point-arith
		// and also Knuth section 4.2.2 pages 217-218
	  	const double epsilon = 1e-8;
	  	return std::abs(x - y) <= epsilon * std::abs(x);
	}
}