// 2. Escreva programa que imprima o quadrado dos números no intervalo fechado de 1 a 20.

#include <stdio.h>

int main(){
	int i = 0;
	
	for (i = 1; i <= 20; i++){
		
		printf("%2d X %2d = %2d\n", i, i, i *i);
	}
	return 0;
}