#include <stdio.h>

//Setando variável

int main(){
  
  int i, inicio, meio, fim, n, key, vetor[100];
  printf("Insira o numero de elementos: \n");
  scanf("%d", &n);

  printf("Insira %d numeros inteiros\n", n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &vetor[i]);
  }

  printf("Insira o valor que deseja encontrar: ");
  scanf("%d", &key);
  inicio = 0;
  fim = n - 1;
  meio = (inicio + fim) / 2;

  while ( inicio <= fim) {
    if (vetor[meio] < key)
    inicio = meio + 1;
    else if (vetor[meio] == key){
      printf("Elemento %d encontrado na posicao %d do vetor", key, meio+1);
    break;
    }
    else
    fim = meio - 1;
    meio = (inicio + fim)/2;
    }
    if (inicio > fim){
    printf("Não encontrado. %d nao se encontra na lista", key);
    return 0;
    }

  //for(int i = 0; i <= sizeof(vetor))
}