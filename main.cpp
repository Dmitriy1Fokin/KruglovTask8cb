#include "Shape.h"
#include "ClassPI.h"


void Task1();
double CustomRand();
void PrintList(double in);

void Task2();
Shape* randShape();

int main()
{
	Task1();
	Task2();

	system("pause");
    return 0;
}

void Task1()
{
	srand(time(0));
	vector <double> mainVector(10);
	generate(mainVector.begin(), mainVector.end(), CustomRand);
	for_each(mainVector.begin(), mainVector.end(), PrintList);

	ClassPI pi;
	cout << "\nMultiplication by PI:\n";
	transform(mainVector.begin(), mainVector.end(), mainVector.begin(), pi);
	for_each(mainVector.begin(), mainVector.end(), PrintList);
}

double CustomRand()
{
	double out = rand() % 1000 * 0.01;

	return out;
}

void PrintList(double in)
{
	cout << in << endl;
}

void Task2()
{
	srand(time(0));
	list<Shape*> mainList(10);
	generate(mainList.begin(), mainList.end(), randShape);
	cout << "Origin list:\n";
	for_each(mainList.begin(), mainList.end(), mem_fun(&Shape::Draw));

	cout << "\nSort by left:\n";
	mainList.sort(mem_fun(&Shape::IsMoreLeft));
	for_each(mainList.begin(), mainList.end(), mem_fun(&Shape::Draw));

	cout << "\nsort by right:\n";
	mainList.sort(not2(mem_fun(&Shape::IsMoreLeft)));
	for_each(mainList.begin(), mainList.end(), mem_fun(&Shape::Draw));

	cout << "\nSort by Upper (up to down):\n";
	mainList.sort(mem_fun(&Shape::IsUpper));
	for_each(mainList.begin(), mainList.end(), mem_fun(&Shape::Draw));

	cout << "\nSort by Upper (down to up):\n";
	mainList.sort(not2(mem_fun(&Shape::IsUpper)));
	for_each(mainList.begin(), mainList.end(), mem_fun(&Shape::Draw));
}

Shape* randShape()
{
	int index = rand() % 3;
	int x = rand() % 50;
	int y = rand() % 50;

	if (index == 0)
	{
		Shape *shape = new Circle(x, y);
		return shape;
	}
	if (index == 1)
	{
		Shape *shape = new Triangle(x, y);
		return shape;
	}
	if (index == 2)
	{
		Shape *shape = new Square(x, y);
		return shape;
	}

}
