#include "rectangle.h"

Rectangle::Rectangle()
{

}
Rectangle::Rectangle(double newWidth, double newHeight)
{
	width = newWidth;
	height = newHeight;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}
void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}
double Rectangle::getArea()
{
	return height*width;
}
Rectangle Rectangle::swap(Rectangle *r2)
{
	Rectangle temp;
	temp = *(this);
	*(this) = *r2;
	*r2 = temp;
	return *this;
}