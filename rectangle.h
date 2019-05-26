#ifndef RECTAGNLE_H
#define RECTANGLE_H

class Rectangle
{
private:
	double width, height;
public:
	Rectangle();
	Rectangle(double, double);
	double getWidth();
	double getHeight();
	void setWidth(double);
	void setHeight(double);
	double getArea();
	Rectangle swap(Rectangle*);
};
#endif