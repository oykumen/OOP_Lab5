#pragma once
using namespace System;
using namespace System::Collections;

ref class Pointt
{
private:

	int^ X = nullptr;
	int^ Y = nullptr;

public:
	Pointt(int^ X, int^ Y);
	int^ Get_X();
	int^ Get_Y();
};


ref class Points
{
private:
	ArrayList^ XY = gcnew ArrayList();
public:
	void AddPoint(Pointt^ new_Point);
	ArrayList^ Get_Points();
};

