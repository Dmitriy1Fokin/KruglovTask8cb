#include "Shape.h"

Shape::Shape()
{
	center_X = 0;
	center_Y = 0;
}

Shape::Shape(int x, int y)
{
	center_X = x;
	center_Y = y;
}

Shape::~Shape()
{
}

bool Shape::IsMoreLeft(const Shape* shape) const
{
	return (this->center_X < shape->center_X);
}

bool Shape::IsUpper(const Shape* shape) const
{
	return this->center_Y < shape->center_Y;
}

void Shape::Draw()
{
	cout << "Shape\n";
}

Circle::Circle()
{
	center_X = 0;
	center_Y = 0;
}

Circle::Circle(int x, int y)
{
	this->center_X = x;
	this->center_Y = y;
}

Circle::~Circle()
{
}

void Circle::Draw()
{
	cout << "Circle. " << "Center points: " << "x - " << center_X << ", y - " << center_Y << endl;
}

Triangle::Triangle()
{
	center_X = 0;
	center_Y = 0;
}

Triangle::Triangle(int x, int y)
{
	this->center_X = x;
	this->center_Y = y;
}

Triangle::~Triangle()
{
}

void Triangle::Draw()
{
	cout << "Triang. " << "Center points: " << "x - " << center_X << ", y - " << center_Y << endl;
}

Square::Square()
{
	center_X = 0;
	center_Y = 0;
}

Square::Square(int x, int y)
{
	this->center_X = x;
	this->center_Y = y;
}

Square::~Square()
{
}

void Square::Draw()
{
	cout << "Square. " << "Center points: " << "x - " << center_X << ", y - " << center_Y << endl;
}
