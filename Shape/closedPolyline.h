#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public Shape
	{
	public:
		ClosedPolyline(IWindowAPI &_window);
		void add(const Point &_point);
		void draw();


	};
}