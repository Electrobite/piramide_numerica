#include <stdio.h>
 
int main() {
 
    int numero; // Número introducido por el usuario.
    int resto;  // Almacena el resto de la división.     
 
    printf("Ingrese el numero que desea invertir: ");             
    scanf("%i", &numero); // Escanea el número introducido. No olvidarse de "&".
    printf("\n"); // Salto de línea.
    printf("Su numero invertido es: ");
 
    // Mientras que "numero sea mayor que "0" hacer:
    
    while(numero > 0) {
 
         resto = numero % 10;  // Obtenemos el resto de la división.                
         numero = numero / 10; // Obtenemos el nuevo número.   
         printf("%i", resto);  // Imprimimos el resto.
    }
 
    return 0;
}
