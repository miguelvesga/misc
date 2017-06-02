#include <math.h>
#include <stdio.h>

#define n 1e7

double arclen(double(*f)(double), double a, double b) {
	double val = 0.0;
	for (int i = 0; i < n; i++) {
		double x = (fabs(b - a) / n);
		double y1 = f(a + ((i + 1) * x));
		double y2 = f(a + (i * x));
		val += sqrt(pow(x, 2) + pow(y1 - y2, 2));
	}
	return val;
}

double f(double x) {
	return pow(x, 2);
}

int main(void) {
	double l = arclen(&f, 0.0, 1.0);
	printf("%.5f\n", l);
}
