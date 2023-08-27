#include <stdio.h>

void Multip(){
	int i, a, b, P;
	a, b, P=0;
	printf("Ingrese el primer numero: \n");
	scanf("%d", &a);
	printf("Ingrese el segundo numero: \n");
	scanf("%d", &b);
	for(i=1;i<=b;i++){
		P=P+a;
	}
	printf("La Multiplicacion de los numeros es: %d \n", P);
}

void Divisao(){
	int dividendo, divisor;
	printf("Ingrese el dividendo: ");
	scanf("%d", &dividendo);
	printf("Ingrese el divisor: ");
	scanf("%d", &divisor);
	if (divisor == 0) {
		printf("Error: No se puede dividir entre cero\n");
	}
	int cociente = 0;
	int resto = dividendo;
	while (resto >= divisor) {
		resto -= divisor;
		cociente++;
	}
	printf("El resultado de la división es: %d\n", cociente);
}

int main() {
	int O;
	printf("Ingrese una Operacion: 1(Multiplicar) o 2(Dividir) \n");
	scanf("%d", &O);
	if(O==1){
		Multip();
	}
	else{
		if(O==2){
			Divisao();
		}
	}
	
	return 0;
}

