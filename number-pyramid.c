#include <stdio.h>

int main() {

   int num;

   printf("Introduce un número entre 0 y 9: ");
   scanf("%i", &num);
   printf("\n");

   // Definimos la altura de la pirámide, es decir, su nº de líneas.
   for (int altura = num; altura > 0; altura--) {

      // Nº de espacios por línea.
      for (int espacios = altura - 1; espacios > 0; espacios--) {
         printf(" ");
      }

      int num_asc = 1;

      // Números ascendentes por línea.
      for (int caracteres_asc = num - altura + 1; caracteres_asc > 0; caracteres_asc--) {
         printf("%i", num_asc);
         num_asc++;
      }

      int num_desc = num_asc - 2;

      // Números descendentes por línea.
      for (int caracteres_desc = num - altura; caracteres_desc > 0; caracteres_desc--) {
         printf("%i", num_desc);
         num_desc--;
      }

      printf("\n");
   }

   return 0;
}