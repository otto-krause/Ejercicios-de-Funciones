#include <stdio.h>
#include <stdlib.h>

float Conv_a_H(int Dias){
	float Horas;
	Horas=Dias*24;
	return Horas;
}

float Conv_a_D(int Horas){
	float Dias;
	Dias=Horas/24;
	return Dias;
}
	
int main() {
	int a, valor;
	float Horas, Dias;
	printf("Ingrese si el valor ingresado son Dias o Horas (1 o 2) \n");
	scanf("%d", &a);
	printf("Ingrese el valor \n");
	scanf("%d", &valor);
	system("cls");
	if (a==1){
		Horas=Conv_a_H(valor);
		printf("Su valor en Horas es: %.1f \n", Horas);
	}
	if (a==2){
		Dias=Conv_a_D(valor);
		printf("Su valor en Dias es: %.1f \n", Dias);
	}
	
	return 0;
}

