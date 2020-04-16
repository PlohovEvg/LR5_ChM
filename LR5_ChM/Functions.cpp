#include "Functions.h"

double u1(double x, double y)
{
	return sin(M_PI*x*y);
}

double f1(double x, double y)
{
	return M_PI*M_PI*sin(M_PI*x*y)*(x*x + y*y);
}

double f2(double x, double y)
{
	return -exp(-x*y*y);
}

double mu1(double y)
{
	return (y - 2)*(y - 3);
}

double mu2(double y)
{
	return y*(y - 2)*(y - 3);
}

double mu3(double x)
{
	return (x - 1)*(x - 2);
}

double mu4(double x)
{
	return x*(x - 1)*(x - 2);
}