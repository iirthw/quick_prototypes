#pragma once

namespace core
{
	template <typename T> 
	struct vec2_t
	{ 
	    T x;
	    T y;
	    
	    T lengthSq() const;
	}; // struct vec2_t

  typedef vec2_t<double> vec2;
  typedef vec2_t<int> ivec2;
} // namespace core