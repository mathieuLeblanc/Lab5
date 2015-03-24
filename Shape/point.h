#pragma once

namespace ShapeLibrary
{
	class Point
	{
	public:

		Point(const double _x, const double _y);
		Point();
		double x;
		double y;

		bool Point::operator == (const Point & point) const;
		bool Point::operator != (const Point & point) const;
	};

}



