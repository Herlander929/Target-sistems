#include <math.h>
#include <stdio.h>

int main(void) {
  int n;
  int fibonacci = 0;
  int variavel_auxiliar = 1;
  int ValorPertence = 0;
  int numero_buscado;

  printf("Informe um numero para calcular a seq. de Fibonacci.\n ");
  scanf("%d", &n);

  printf("Informe um numero que deseja achar na sequência.\n ");
  scanf("%d", &numero_buscado);

  while (fibonacci < 500) {
    if (numero_buscado == fibonacci) {
      ValorPertence = 1;
    }
    printf("%d-", fibonacci);
    fibonacci = fibonacci + variavel_auxiliar;
    variavel_auxiliar = n;
    n = fibonacci;
  }

  if (ValorPertence == 0) {
    printf("O numero não pertence à sequência");
  } else {
    printf("O numero pertence  à sequência");
  }

  return 0;
}
