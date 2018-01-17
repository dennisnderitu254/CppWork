#include "circle.h"

#include <iostream>
using namespace std;
#define Pie = 3.142

int main()
{
	Shape s;
	Circle c;

	s.draw();

	c.draw();

	c.setradius(7);

	cout<<c.areax()<<endl;

	return 0;
}