#include "Points.h"

void Points::AddPoint(Pointt^ new_Point)
{
	XY->Add(new_Point);
	return;
}

ArrayList^ Points::Get_Points()
{
	return XY;
}

Pointt::Pointt(int^ X, int^ Y)
{
	this->X = X;
	this->Y = Y;
}

int^ Pointt::Get_X()
{
	return X;
}

int^ Pointt::Get_Y()
{

	return Y;
}
