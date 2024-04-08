#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	char *z;
	z=(char*)malloc(sizeof(char));
    *z='c';	
	printf("Valor: %c\n",*z);
	return 0;
}