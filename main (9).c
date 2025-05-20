
#include <stdio.h>

int main() {
	float peso, altura, indice;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	indice = peso / (altura * altura);
	
	printf("\nSu índice de masa corporal es: %.2f\n", indice);
	
	printf("\nÍndice\t\t| Condición\n");
	printf("-----------------------------\n");
	printf("<18.5\t\t| Bajo peso\n");
	printf("18.5 a 24.9\t| Normal\n");
	printf("25.0 a 29.9\t| Sobrepeso\n");
	printf(">=30\t\t| Obesidad\n");
	
	return 0;
}
