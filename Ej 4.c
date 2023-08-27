#include <stdio.h>

float Num_Promedio(int a, int b){
	float Promedio;
	return Promedio = (a+b)/2;
}

int main() {
	int Num1, Num2;
	float Promedio;
	printf("Ingrese un numero: \n");
	scanf("%d", &Num1);
	printf("Ingrese otro numero: \n");
	scanf("%d", &Num2);
	Promedio = Num_Promedio(Num1, Num2);
	printf("El promedio de los 2 numeros es: %.1f", Promedio);
	
	return 0;
}

