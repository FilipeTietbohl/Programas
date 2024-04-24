#include <stdio.h>

void fatorial(){
  int numero = 0, i = 1, fatorial = 1;

  printf("Insira um valor para obter seu fatorial!\n");
  scanf("%d", &numero);

  for (i = 1; i <= numero; i++){

    fatorial = fatorial * i;
  } 
  printf("%d", fatorial);
}

void main(){
  fatorial();
};