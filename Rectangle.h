#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class CRectangle : public CShape
{
	public:
		CRectangle();
		~CRectangle();


	public:
		virtual bool Init();
};

#endif
