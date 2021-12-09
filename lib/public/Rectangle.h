#pragma once

#define USE_SINGLE_PRECISION

namespace geom
{
	// ------------------------------------------------------------------------

	template <typename T>
	struct Rectangle
	{
        Rectangle();
		Rectangle(T xval, T yval, T wval, T hval);
		T area() const;

		T x;
		T y;
		T width;
		T height;
	}; // struct Rectangle

	// ------------------------------------------------------------------------

    template <typename T>
    Rectangle<T>::Rectangle()
    : x(0.0f)
    , y(0.0f)
    , width(0.0f)
    , height(0.0f)
    {}

	template <typename T>
	Rectangle<T>::Rectangle(T xval, T yval, T wval, T hval)
	: x(xval)
	, y(yval)
	, width(wval)
	, height(hval)
	{}

    template <typename T>
	T Rectangle<T>::area() const 
	{
		return width * height;
	}

#ifdef USE_SINGLE_PRECISION
	typedef Rectangle<float> Rect;
#else // USE_DOUBLE_PRECISION
	typedef Rectangle<double> Rect;
#endif
} // namespace geom
