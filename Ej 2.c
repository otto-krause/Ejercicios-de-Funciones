#include <stdio.h>

void Mostrar_Num(char *Num){
	int a;
	printf("Presione 1 para ver el numero: \n");
	scanf("%d", &a);
	if (a==1){
		printf("El numero es: %s", Num);
	}
}

int main() {
	char Num[5];
	int caracter;
	printf("Ingrese un numero de 6 digitos: \n");
	scanf("%s", Num);
	printf("seleccione un caracter: (1-6) \n");
	scanf("%d", &caracter);
	if (caracter==1){
		Num[0] = '*';
	}
	else{
		if (caracter==2){
			Num[1] = '*';
		}
	
		else{
			
			if (caracter==3){
				Num[2] = '*';
			}
		
			else{
				
				if (caracter==4){
					Num[3] = '*';
				}
			
				else{
					
					if (caracter==5){
						Num[4] = '*';
					}
				
					else{
						if (caracter==6){
							Num[5] = '*';
						}
					}
				}
			}
		}
	}
	
	Mostrar_Num(Num);
	
	return 0;
}

