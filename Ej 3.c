#include <stdio.h>

int sas(int a){
	printf("%c", a);
}

int main() {
	int a;
	printf("Ingrese un numero: \n");
	scanf("%d", &a);
	
	sas(a);
	
	return 0;
}

