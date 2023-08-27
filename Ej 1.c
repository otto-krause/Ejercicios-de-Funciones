#include <stdio.h>
#include <stdlib.h>

void Nombre_Alumno(){
	char Name[20];
	char Apellido[20];
	printf("Ingrese su nombre: \n");
	scanf("%s", &Name);
	printf("Ingrese su Apellido: \n");
	scanf("%s", &Apellido);
	printf("%s ", Name);
	printf(" %s", Apellido);
}

int main() {
	Nombre_Alumno();
	
	return 0;
}

