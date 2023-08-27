#include <stdio.h>

int Num_Comp(int Num){
	if (Num>0){
		return 0;
	}
	if (Num<0){
		return 1;
	}
}

int main() {
	int Num, Modulo, Comp;
	printf("Ingrese un numero: \n");
	scanf("%d", &Num);
	Comp = Num_Comp(Num);
	if (Comp==0){
		printf("El Numero es Positivo \n");
	}
	else {
		if(Comp==1){
			printf("El Numero es Positivo \n");
			Modulo = 0-Num;
			printf("%d", Modulo);
		}
	}
	
	return 0;
}

