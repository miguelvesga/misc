#include <math.h>
#include <stdio.h>

#define n 10000000.0

double riemann(double(*f)(double), double a, double b) {
	double val = 0.0;
	for (double i = 0; i <= n; i += 1.0) {
		double h = (a + (fabsf(b - a) * (i / n)));
		double w = (fabsf(b - a) / n);
		val += f(h) + w;
	}
	return (val / n);
}

double f(double x) {
	return log(x);
}

double main(void) {
	double r = riemann(&f, 1.0, 2.0);
	printf("%.5f\n", r);
}
