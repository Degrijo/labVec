#include "stdafx.h"
#include "MyVector.h"
#include <math.h>


MyVector::MyVector(double x1, double x2, double x3)
{
	x[0] = vec1;
	x[1] = vec2;
	x[2] = vec3;
}


MyVector::~MyVector()
{
}

double* MyVector::GetVectorCoordinates()
{
	return this->x;
}

double MyVector::GetVectorLength()
{
	return sqrt(powf(this->x[0], 2) + powf(this->x[1], 2) + powf(this->x[2], 2));
}

MyVector MyVector::operator+(const MyVector& vec)
{
	MyVector x1(this->x[0] + vec.x[0], this->x[1] + vec.x[1], this->x[2] + vec.x[2]);
	return(x1);
}

MyVector MyVector::operator-(const MyVector& vec)
{
	MyVector x1(this->x[0] - vec.x[0], this->x[1] - vec.x[1], this->x[2] - vec.x[2]);
	return(x1);
}

bool MyVector::operator>(const MyVector vec)
{
	if (GetVectorLength()>GetVectorLength()) return true;
	else return false;
}

bool MyVector::operator<(const MyVector vec)
{
	if (GetVectorLength()<GetVectorLength()) return true;
	else return false;
}

bool MyVector::operator>=(const MyVector vec)
{
	if (GetVectorLength()>=GetVectorLength()) return true;
	else return false;
}

bool MyVector::operator<=(const MyVector vec)
{
	if (GetVectorLength()<=GetVectorLength()) return true;
	else return false;
}