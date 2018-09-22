#pragma once
class MyVector
{
private:
	double x[3], y[3];
public:
	MyVector(double vec1, double vec2, double vec3);
	~MyVector();
	double* GetVectorCoordinates();
	double GetVectorLength();
	MyVector operator+(const MyVector& vec);
	MyVector& operator+=(const MyVector vec);
	MyVector operator-(const MyVector vec);
	MyVector operator-=(const MyVector vec);
	MyVector operator*(const MyVector vec);
	MyVector operator*=(const MyVector vec);
	MyVector operator/(const MyVector vec);
	MyVector operator/=(const MyVector vec);
	MyVector operator^(const MyVector vec);
	bool operator>(const MyVector vec);
	bool operator>=(const MyVector vec);
	bool operator<(const MyVector vec);
	bool operator<=(const MyVector vec);

};

