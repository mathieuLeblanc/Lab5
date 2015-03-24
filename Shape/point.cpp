#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;

Point::Point()
:x(0),
y(0)
{
}

Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0 || _y < 0) throw::invalid_argument("Doit être suppérieur à 0");

	
}

bool Point::operator == (const Point & point) const
{
	bool same = true;
	
	if (x != point.x || y != point.y)
	{
		same = false;
	}
	return same;
}
bool Point::operator != (const Point & point) const
{
  return !(*this == point);
}
