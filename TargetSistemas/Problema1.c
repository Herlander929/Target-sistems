#include <stdio.h>
#include  <math.h>

int main(void) {

  int INDICE = 13;
  int SOMA = 0;
  int K = 0;

  while (K < INDICE) 
  {
    K = K + 1;
    SOMA = SOMA + K;
  } 
  
  printf("%i", SOMA);
  return 0;
}

//O Valor da soma será 91;