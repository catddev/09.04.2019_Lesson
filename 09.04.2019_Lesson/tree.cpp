#include "tree.h"

tree::tree(double h, double l)
{
	height = h;
	life_length = l;
}

void tree::setHeight(double h)
{
	height = h;
}

void tree::setLifeLength(double l)
{
	life_length = l;
}

double tree::getHeight()
{
	return height;
}

double tree::getLifeLength()
{
	return life_length;
}

void tree::print()
{
	cout << height << " " << life_length << endl;
}

//bool tree::compare(tree obj)
//{
//	return (height==obj.height);
//}

bool tree::operator==(tree obj)
{
	return (height == obj.height);
}

bool tree::operator>(tree obj)
{
	return (height>obj.height);
}

bool tree::operator>(double l)
{
	return life_length > l;
}

tree tree::operator+(double ll)
{
	this->life_length += ll;
	this->height += ll * 0.5;
	return *this;
}
