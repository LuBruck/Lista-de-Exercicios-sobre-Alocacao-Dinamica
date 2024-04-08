#include <stdio.h>
#include <stdlib.h>

int calcular(int a){
a=a*2;
return a;
}

int main(int argc, char** argv) {
	int *a;
    a=(int*)malloc(sizeof(int));
	*a=3;
	*a=calcular(*a);
	printf("Valor: %d\n",*a);
	return 0;
}
