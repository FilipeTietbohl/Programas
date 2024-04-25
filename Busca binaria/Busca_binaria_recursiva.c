#include <stdio.h>

int BuscaBinaria(int a[], int inicio, int fim, int m)
{
if (fim >= inicio) {
int meio = inicio + (fim - inicio) / 2;
if (a[meio] == m)
return meio;
if(a[meio] > m)
return BuscaBinaria(a, inicio, meio - 1, m);
return BuscaBinaria(a, meio + 1, fim, m);
}
return -1;
}

int main(void)
{
int a[] = { 12, 13, 21, 36, 40 };
int i,m;
for(i=0;i<5;i++)
{
printf(" %d",a[i]);
}
printf("\n");
int n = sizeof(a) / sizeof(a[0]); // Saber o tamanho do vetor
printf("Insira o numero a ser procurado\n");
scanf("%d", &m);
int resultado = BuscaBinaria(a, 0, n - 1, m);
(resultado == -1) ? printf("Elemento nao esta presente no vetor"): 
printf("\nO elemento esta na posicao %d do vetor", resultado);//finalmente usando operacao ternaria
return 0;
}