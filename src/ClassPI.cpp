#include "ClassPI.h"

ClassPI::ClassPI()
{
}

ClassPI::~ClassPI()
{
}

double ClassPI::operator()(double x)
{
	return x*3.14;
}
