#include <stdio.h>
#include <stdlib.h>

void apresentar(int b){
printf("Valor: %d\n",b);
}

int main(int argc, char** argv) {
	int *a;
    a=(int*)malloc(sizeof(int));
	*a=4;
	apresentar(*a);
	return 0;
}
