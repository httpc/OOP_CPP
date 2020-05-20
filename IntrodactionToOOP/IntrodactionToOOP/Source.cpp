#include<iostream>
using namespace std;

class Point
{
private:
	double x;
	double y;
public:
	double get_x()
	{
		return x;
	}
	double get_y()
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
};
class Point3D :public Point
{
	double z;
public:
	double get_z() const
	{
		return z;
	}
	void set_z(double z)
	{
		this->z = z;
	}
};

void main()
{
	
	Point A; 
	
	
	A.set_x(2);
	A.set_y(4);
	cout << A.get_x() << '\t' << A.get_y() << endl;

	Point* pA = &A;
	cout << pA->get_x() << '\t' << A.get_y() << endl;
	Point3D B;
	B.
}