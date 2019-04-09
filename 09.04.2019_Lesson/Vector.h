#pragma once
#include"tree.h"
class Vector {
private:
	tree*ts;
	int cur_size;
	int buf_size;
public:
	Vector();
	Vector(int size);
	Vector(const Vector&obj);
	~Vector();
	int size();
	tree& operator[](int index);
	Vector operator=(const Vector&obj); //явно прописываем оператор присваивания для точного копирования векторов
	void add(tree obj);
};
