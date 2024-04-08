#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int *a;

    a=(int*)malloc(sizeof(int));
	printf("\nDigite um valor:");
	scanf("%d",a);
	printf("Valor: %d\n",*a);
	return 0;
}