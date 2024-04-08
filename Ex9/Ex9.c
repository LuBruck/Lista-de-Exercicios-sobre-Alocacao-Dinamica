#include <stdio.h>
#include <stdlib.h>

int ler(){
	int a;
printf("\nDigite um valor:");
	scanf("%d",&a);
	return a;
}

int calcular(int a){
	int i;
i=2020 - a;
return i;
}

void apresentar(int i){
	printf("\nIdade: %d\n",i);
}

int main(int argc, char** argv) {
	int *ano, *idade;
    ano=(int*)malloc(sizeof(int));
    idade=(int*)malloc(sizeof(int));
	*ano=ler();
	*idade=calcular(*ano);
	apresentar(*idade);
	return 0;
}

