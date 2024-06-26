﻿

#include <iostream>
using namespace std;

class Quadrangle
{
protected:
	double sideA, sideB, sideC, sideD, height;
public:
};

class Square: public Quadrangle
{
protected:

public:
	Square(double side)
	{
		height = sideA = sideB = sideC = side;
	}
};

class Rectangle: Quadrangle
{
protected:

public:
	Rectangle(double firstSide, double secondSide)
	{
		sideA = sideC = firstSide;
		height = sideB = sideD = secondSide;
	}
};

class Trapeze: Quadrangle
{
protected:

public:
	Trapeze(double firstSide, double secondSide, double thirdSide, double fourthSide, double h)
	{
		sideA = firstSide;
		sideB = secondSide;
		sideC = thirdSide;
		sideD = fourthSide;
		height = h;
	}
};




int main()
{
	Rectangle r(10, 5);

	Square s(6);

	Trapeze t(10, 6, 4, 5, 3);
}


