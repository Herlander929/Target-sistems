#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    char guarda_palavra[] = "Ortorrinaringologista";
   
    size_t tamanho = strlen(guarda_palavra);

   
    for(int i = 0; i < tamanho / 2; i++) {
      
       char tmp = guarda_palavra[i];
      
       guarda_palavra[i] = guarda_palavra[tamanho - i - 1]; 
      
       guarda_palavra[tamanho - i - 1] = tmp; 
    }
    printf("%s", guarda_palavra);
}
