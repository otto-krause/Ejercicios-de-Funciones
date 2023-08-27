#include <stdio.h>

void Num_Promedio(int a, int b, int c){
	float Promedio;
	Promedio=(a+b+c)/3;
	printf("El promedio de los Numeros es: %.1f", Promedio);
}

int main() {
	int Num1, Num2, Num3;
	printf("Ingrese un numero: \n");
	scanf("%d", &Num1);
	printf("Ingrese un numero: \n");
	scanf("%d", &Num2);
	printf("Ingrese un numero: \n");
	scanf("%d", &Num3);
	Num_Promedio(Num1, Num2, Num3);
	
	return 0;
}

