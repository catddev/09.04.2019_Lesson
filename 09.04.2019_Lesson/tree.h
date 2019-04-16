#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
//#include"Vector.h"
using namespace std;

class tree {
private:
	double height;
	double life_length;
public:
	tree():height(0), life_length(0){}
	tree(double h, double l);
	void setHeight(double h);
	void setLifeLength(double l);
	double getHeight();
	double getLifeLength();

	void print();
	//bool compare(tree obj);
	bool operator==(tree obj);
	bool operator>(tree obj);
	bool operator>(double l);
	tree operator + (double ll);

	//здесь просто перечисление "друзей", которые должны иметь доступ к приватным свойствам этого класса tree, но сам метод operator>> внешний
	friend istream& operator>>(istream& is, tree & obj);
	
	//односторонняя дружка, пока tree не добавлен как друг в тело Vector
	friend ostream& operator<<(ostream& os, tree obj);
};
//т.к. метод для двух классов iostream и tree,то метод только внешний!
//возвращает поток ввода, поэтому istream, изменяет поток, поэтому &
istream& operator>>(istream& is, tree & obj);

//поток вывода
ostream& operator<<(ostream& os, tree obj); //нет ссылки & для tree, потому что только выводит поток, не изменяя
//эти операторы могут выводить и считывать и с файла и с консоли