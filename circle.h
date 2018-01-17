#include <iostream>
using namespace std;
#define pie 3.142

class Shape
{
protected:
	float area;
public:
	void draw(){cout<<"I'm a shape!!";}
	Shape(){cout<<"I am Created!!";}
	~Shape(){}
};

class Circle:public Shape
{
private:
	float radius;
public:
	float areax()
	{
		area = pie*radius*radius;
		return area;
	}
	float setradius(float r)
	{ 
		radius=r;
	}

	Circle()
	{
	 radius=0;
	}

	~Circle(){ }

	void draw(){cout<<"I'm circle ";}
};
