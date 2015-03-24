#include "stdafx.h"

using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI& _window)
:Shape(_window)
{
}

void Polygon::draw()
{
	
	Shape::draw();
}

void Polygon::add(const Point& _point)
{
	Shape::add(_point);
}