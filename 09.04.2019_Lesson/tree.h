#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
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
};