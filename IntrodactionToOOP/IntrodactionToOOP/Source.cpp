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
	double Distance(Point b)
	{
		return (sqrt(((x-b.x) * (x-b.x)) + (y - b.y) * (y-b.y)));
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
double Dis (Point3D A, Point3D B) 
{

	return sqrt((A.get_x() - B.get_x())*(A.get_x() - B.get_x())+ (A.get_y() - B.get_y()) * (A.get_y() - B.get_y()));
}
void main()
{
	
	Point3D A;
	Point3D B;
	
	A.set_x(2);
	A.set_y(4);
	A.set_z(3);
	B.set_x(1);
	B.set_y(1);
	B.set_z(1);

	Point3D* pA = &A;
	cout << A.get_x() << '\t' << A.get_y() <<'\t'<< A.get_z() << endl;
	cout << A.Distance(B) << endl;
	cout<<Dis(A, B)<<endl;
}