//Refazendo fibonacci
#include <stdio.h>

void main(){
  int numero1 = 1, numero2 = 1, resultado = 1, i;
  // i = numero de execuções
  for(i=0; i<= 10; i++){
    resultado = numero1 + numero2;
    numero2 = numero1;
    numero1 = resultado;
    printf("%d ", resultado);
  }
}