#include <stdio.h>
#include <math.h>

int main(void) {
float faturamentoSp = 67836.43;
float faturamentoRj = 36678.66;
float faturamentoMg = 29229.88;
float faturamentoEs = 27165.48;
float faturamentoOutros = 19849.53;

  float faturamentoTotal =
  faturamentoSp +
  faturamentoRj +
  faturamentoMg +
  faturamentoEs +
  faturamentoOutros;

float porcentamSp = (faturamentoSp / faturamentoTotal) * 100;
float porcentamRj = (faturamentoRj / faturamentoTotal) * 100;
float porcentamMg = (faturamentoMg / faturamentoTotal) * 100;
float porcentamEs = (faturamentoEs / faturamentoTotal) * 100;
float porcentamOutros = (faturamentoOutros / faturamentoTotal) * 100;

  printf("SP - %1f%\nRJ - %f%\nMG - %f%\nES - %f%\nOutros - %f%\n", porcentamSp, porcentamRj, porcentamMg, porcentamEs, porcentamOutros);
  

  return 0;
}