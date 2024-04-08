#include <stdio.h>
#include <stdlib.h>

int ler(){
	int a;
printf("Digite um valor:");
scanf("%d",&a);
return a;
}

int main(int argc, char** argv) {
	int *a;
    a=(int*)malloc(sizeof(int));
	*a=ler();
	printf("Valor: %d\n",*a);
	return 0;
}
