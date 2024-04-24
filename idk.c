//Não consegui remover última virgula antes do '}'
#include <stdio.h>

//Declarando algumas variaveis
int quantidadeDeNumeros = 0, i = 0, j = 0, soma = 0;
int vetor[0];


//Setando funções
void printarArray(){
    printf("\nvetor[%d] = {", quantidadeDeNumeros); //Layout

    for(j = 0; j < quantidadeDeNumeros; j++)
    {
      printf(" %d", vetor[j]);
    };

    printf(" }\n");  // :)
  };


void somarArray(){
  for (i=0; i<=quantidadeDeNumeros;i++){
    soma = soma + vetor[i];
  };
printf("A soma dos elementos do array e: %d", soma);
}


void main(){

  printf("Quantos numeros inteiros deseja somar?\n");
  scanf("%d", &quantidadeDeNumeros);

  vetor[quantidadeDeNumeros];

  for (i=0 ; i < quantidadeDeNumeros; i++){
    printf("Por gentileza, insira o %d elemento no vetor:\n", i+1);
    scanf("%d", &vetor[i]);
  };

  printarArray();
  somarArray();
}