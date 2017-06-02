#include <math.h>
#include <stdio.h>

#define n 1e7

double riemann(double(*f)(double), double a, double b) {
	double val = 0.0;
	for (int i = 0; i <= n; i++) {
		double w = (fabsf(b - a) / n);
		double h = (a + (fabsf(b - a) * (i / n)));
		val += f(h) * w;
	}
	return val;
}

double f(double x) {
	return log(x);
}

int main(void) {
	double r = riemann(&f, 1.0, 2.0);
	printf("%.5f\n", r);
}
