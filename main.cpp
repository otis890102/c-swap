#include "rectangle.h"
#include<iostream>
using namespace std;

int main()
{
	Rectangle r1(3,7);
	Rectangle r2(4,3);

	r1.swap(&r2);

	cout << r1.getArea();

	system("pause");
	return 0;
}