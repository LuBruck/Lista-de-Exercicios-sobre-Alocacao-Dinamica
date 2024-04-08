#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
	p=(int*)malloc(sizeof(int));
    *p=3;	
	printf("Valor: %d\n",*p);

    return 0;
}