#pragma once
#include <algorithm>
#include <functional>
#include <ctime>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Shape
{
public:
	Shape();
	Shape(int x, int y);
	~Shape();
	bool IsMoreLeft(const Shape* shape) const;
	bool IsUpper(const Shape* shape) const;
	virtual void Draw();

protected:
	int center_X, center_Y;

};

class Circle : public Shape
{
public:
	Circle();
	Circle(int x, int y);
	~Circle();
	void Draw();
};

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(int x, int y);
	~Triangle();
	void Draw();
};

class Square : public Shape
{
public:
	Square();
	Square(int x, int y);
	~Square();
	void Draw();
};



