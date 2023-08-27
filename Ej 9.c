#include <stdio.h>

int Calc_Promedio(int total){
	float a;
	a=total/3;
	if((a>=9) && (a<=10)){
		return 4;
	}
	else{
		if((a>=7) && (a<=8)){
			return 3;
		}
		else{
			if((a>=6) && (a<=7)){
				return 2;
			}
			else {
				if((a>=5) && (a<=6)){
					return 1;
				}
				else{
					if(a>5){
						return 0;
					}
				}
			}
		}
	}
}

int main() {
	int i, nota, total, Promedio=0;
	for(i=1;i<=3;i++){
		printf("Ingrese la nota %d: \n", i);
		scanf("%d", &nota);
		total=total+nota;
	}
	Promedio=Calc_Promedio(total);
	printf("%d", Promedio);
	
	return 0;
}

