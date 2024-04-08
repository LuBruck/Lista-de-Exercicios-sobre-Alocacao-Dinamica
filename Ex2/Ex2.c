#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	double *x;
	x=(double*)malloc(sizeof(double));
    *x=3.2;	
	printf("Valor: %lf",*x);
	return 0;
}