#include <stdio.h>

int fatorial(int i)
{
  if (i == 0)
    return 1;
  else 
    return (i * fatorial(i-1));
}

int main(){
  int fatorado;
  int resultado;

  printf("Bota um valor ae:\n");
  scanf("%d", &fatorado);

  resultado = fatorial(fatorado);
  printf("Resultado: %d", resultado);
  return 0;
}