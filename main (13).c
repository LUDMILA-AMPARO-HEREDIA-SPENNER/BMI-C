#include <stdio.h>  
int main() {
    float peso, altura, indice;  

    printf("Ingrese el peso en kg: ");  
    scanf("%f", &peso); 

    printf("Ingrese la altura en metros: "); 
    scanf("%f", &altura);  

    indice = peso / (altura * altura);  

    
    if (indice < 18.5) {
       
        printf("Tu índice corporal es de %.2f, estás bajo de peso.\n", indice);
    } else if (indice >= 18.5 && indice <= 24.9) {
        printf("Tu índice corporal es de %.2f, tenés un peso normal.\n", indice);
    } else if (indice >= 25 && indice <= 29.9) {
        printf("Tu índice corporal es de %.2f, tenés sobrepeso.\n", indice);
    } else if (indice >= 30) {
        printf("Tu índice corporal es de %.2f, tenés obesidad.\n", indice);
    }

    return 0;  
}
