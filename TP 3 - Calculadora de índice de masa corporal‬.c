
#include <stdio.h>

int main()
{
    float altura, peso, indice;
    printf("POR FAVOR INGRESES SU ALTURA EN METROS:");
    scanf("%f", &altura);
    printf("\n POR FAVOR INGRESA TU PESO EN KG:");
    scanf("%f",&peso);
    
    indice = peso/(altura*altura);
    
    if (indice<18.5){
        printf ("\nestas bajo de peso ya que tu indice no supera el 18,5, tenes: %f",indice);
    }
    if (indice>18.5&&indice<24.9){
        printf("\nestas en un peso ideal ya que tu indice esta entre 18.5 y 24.9, tenes: %f", indice);
    }
    if (indice>25&&indice<29.9){
        printf("\ntenes sobrepeso ya que tu indice esta entre 25.0 y 29.9, tenes: %f",indice);
    }
    if(indice>=30){
        printf ("\n TENES OBESIDAD!!!!, TU INDICE SUPERA EL 30! TENES: %f",indice);
}
    return 0;
}