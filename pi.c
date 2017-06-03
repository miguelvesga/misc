#include <math.h>
#include <stdio.h>

#define n 1e7

double pi(void) {
	double val = 0.0;
	for (int i = 0; i <= n; i++) {
		val += (pow(-1, i)) / ((2 * i) + 1);
	}
	return 4 * val;
}

int main(void) {
	printf("%.5f\n", pi());
}
