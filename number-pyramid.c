#include <stdio.h>
 
int main () { // Inicio de la función principal.
 
   int numero; // Número introducido por el usuario.
   
   int espacios; // Número de espacios. 
   int caracteres_arriba; // Número de caracteres que se imprimen al subir.
   int caracteres_abajo; // Número de caracteres que se imprimen al bajar.
   
   int contador_lineas; // Cuenta los espacios que hay que imprimir en cada linea.
   int contador_caracteres; // Cuenta los caracteres que hay que imprimir en cada linea al subir.
   int contador_espacios; // Cuenta los caracteres que hay que imprimir en cada linea al bajar.
   
   printf ("Indique numero: ");
   scanf ("%i", &numero); // Leemos el dato introducido. Es importante no olvidarse del símbolo "&".
   printf ("\n"); // Imprimimos dos saltos de línea para que no se apelotone el texto.
 
   espacios = numero + 4; 
   caracteres_arriba = 1;
   caracteres_abajo = 0;
 
 
   // Comenzamos por el primer "for", dentro del cuál estarán todas las operaciones necesarias.
   // Este "for" es el encargado de ir cambiando de línea. 
   // Por ejemplo: "numero = 5". ---> Contará 5 lineas porque "contador_lineas = numero".
 
   for ( contador_lineas = numero ; contador_lineas > 0 ; contador_lineas--) 
   
   { // Inicio FOR contador_lineas.
 
 
      // Lo primero que el programa debe imprimir es el número de espacios. La primera línea de todas
      // necesita como mínimo un espacio menos que el número indicado, es decir, "espacios = numero - 1".
      // Opcional: para que quede más bonito podemos dejar un poco más de margen. Para ello podemos optar
      // por "espacios = numero", "espacios = numero + 3", etc. Lo que más te guste.
 
      for ( contador_espacios = espacios ; contador_espacios > 0 ; contador_espacios--) 
      
      { // Inicio FOR contador_espacios.
		   
         printf (" "); // Imprimimos un espacio en blanco. 
         
      } // Fin FOR contador_espacios.
      
      
      // Vamos a aprovechar la variable "numero" dado que ya no nos hace falta para más nada. La usaremos para 
      // definir el número que se va a imprimir en pantalla. Como el primer número de cada fila SIEMPRE va
      // a ser el 1, vamos a establecer que "numero = 1". 
      
      numero = 1;
 
      // Después de imprimir los espacios, debemos imprimir los números correspondientes. Pero hay que tener en 
      // cuenta que los números deben subir y bajar, por lo que debemos establecer dos "for", uno para subir y
      // otro para la bajar. En el "for" ascendete, "contador_caracteres = caracteres_arriba", y en el for descente,
      // "contador_caracteres = caracteres_abajo". Ahora explicaremos el por qué.
      
      // S U B I R 
      // Sabemos que la primera fila solo contiene un único número, el 1. Es por eso que "caracteres_arriba = 1".
 
      for ( contador_caracteres = caracteres_arriba ; contador_caracteres > 0 ; contador_caracteres--)  
      
      { // Inicio del primer FOR contador_caracteres.
		  
         printf ("%i", numero);
         numero++; // Debemos indicar el siguiente número a imprimir, por lo que debemos sumar +1 a la variable "numero".
                   // De no ser así estaríamos imprimiendo siempre el número 1, y no el 2, el 3, el 4, etc.
         
      } // Fin del primer FOR contador_caracteres.
 
      
      // Ahora vamos a comenzar la cuenta hacia atrás. Si nos fijamos, cuando termina el FOR "contador_caracteres" la variable "numero" 
      // será siempre un número por encima del último que se ha impreso en pantalla. Es decir, si por ejemplo en la fila se ha impreso: "12345", 
      // "numero" valdrá 6. Si se ha impreso: "123", "numero" valdrá 4, etc. Por tanto vamos a indicar que "numero = numero - 2".
 
      numero = numero - 2;
 
      // B A J A R
      // Es obvio que en la primera fila no hay ningún tipo de bajada, por lo que comenzaremos asignando "caracteres_abajo = 0".
      
      for ( contador_caracteres = caracteres_abajo ; contador_caracteres > 0 ; contador_caracteres--)  
      
      { // Inicio del segundo FOR contador_caracteres.
		  
         printf ("%i", numero);
         numero--; // Debemos indicar el siguiente número a imprimir, y al ser cuenta descendente, será siempre -1.
         
      } // Fin del segundo FOR contador_caracteres.
 
 
      // A continuación debemos preparar las variables para la siguiente repetición, o lo que es lo mismo, la siguiente línea.
 
      espacios--; // Imprimiremos un espacio menos.
      caracteres_arriba++; // Al principio hay 1 número. Habrá un número más al subir:   |  1...   |  12...  |  123...  |  1234...  |
      caracteres_abajo++; // Al principio hay 0 números. Habrá un número más al bajar:   |  ....   |  1....  |  21....  |  321....  |
      printf ("\n"); // ¡IMPORTANTE! Debemos imprimir un salto de línea para lograr la forma de pirámide.
 
      // Después de esto el ciclo se volverá a repetir hasta que "contador_lineas" sea igual que 0.
 
   } // Fin FOR contador_lineas.
 
   return 0;
   
} // Fin de la función principal.
 
 
 
 
 
