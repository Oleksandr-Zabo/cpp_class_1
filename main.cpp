#include <iostream>
using namespace std;

class Point {
	double _x;
	double _y;
	double _z;
public:
	Point() {
		_x = 0;
		_y = 0;
		_z = 0;
	}
	Point(double x) :Point() {
		_x = x;
	}
	Point(double x, double y) :Point(x) {
		_y = y;
	}
	Point(double x, double y, double z) :Point(x, y) {
		_z = z;
	}

	//setters

	void setX(double x) {
		_x = x;
	}
	void setY(double y) {
		_y = y;
	}
	void setZ(double z) {
		_z = z;
	}
	//getters	
	double getX() {
		return _x;
	}
	double getY() {
		return _y;
	}
	double getZ() {
		return _z;
	}

	//print
	void print() {
		cout << "Point: " << endl;
		cout << "X: " << _x << endl;
		cout << "Y: " << _y << endl;
		cout << "Z: " << _z << endl;
		cout << "----------------" << endl;
	}
};

int main()
{
	Point point1(1, 5);
	point1.print();
	point1.setZ(10);
	point1.print();

	system("pause");
	return 0;
}