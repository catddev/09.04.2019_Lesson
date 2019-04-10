#include "Vector.h"

Vector::Vector()
{
	ts = 0;
	cur_size = buf_size = 0;
}

Vector::Vector(int size)
{
	cur_size = 0;
	buf_size = size;
	ts = new tree[buf_size];
}

Vector::Vector(const Vector & obj)
{
	cur_size = buf_size = obj.cur_size;
	ts = new tree[buf_size];
	for (int i = 0; i < buf_size; i++)
		ts[i] = obj.ts[i];
}

Vector::~Vector()
{
	cout << "Destructor" << endl;
	delete[] ts;
}

int Vector::size()
{
	return cur_size;
}

tree & Vector::operator[](int index)
{
	return ts[index];
}

Vector Vector::operator=(const Vector & obj)
{
	cur_size = buf_size = obj.cur_size;
	ts = new tree[buf_size];
	for (int i = 0; i < buf_size; i++)
		ts[i] = obj.ts[i];
	return *this; //возвращает текущий объект, т.к. изменения идут в нем
}

void Vector::add(tree obj)
{
	if (buf_size == 0) {
		buf_size = 4;
		ts = new tree[buf_size];
	}
	else
	{
		if (cur_size == buf_size) {
			buf_size *= 2;
			tree *tmp = new tree[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp[i] = ts[i];

			delete[] ts;
			ts = tmp;
		}
	}
	ts[cur_size++] = obj;
}
