//Fibonacci recursivo
#include <stdio.h>

int Fibonacci(int i){
  if(i <= 1){
    return i;
  } else {
    return Fibonacci(i - 1) + Fibonacci( i - 2);
  }
 
}

void main(){
  int exec;
  exec = Fibonacci(9);
  printf("Numero: %d\n", exec);
}