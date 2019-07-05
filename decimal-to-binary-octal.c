#include <stdio.h>
 
int main () {
 
	int numero; // Número introducido por el usuario.
	int base; // Si es binario valdrá 2, si es octal valdrá 8.
	int opcion; // Nos dará a escoger entre conversión a binario o conversión a octal.
	int resto[50]; // Almacenará el resto de cada división.
   int a; // Variable "FOR" ascente.
   int b; // Variable "FOR" descendente.
 
	printf ("Indica una numero entera: ");
	scanf ("%i", &numero);
	printf ("\n"); // Imprime un salto de línea.
 
   opcion = 0; // Debemos dar un valor cualquiera distinto de "1" o "2" para evitar que escoja por nosotros.
 
 
   // Mientras que la variable "opcion" no sea ni "1" ni "2", se retirá el bucle.
 
	while (opcion < 1 || opcion > 2) 
	{   
	   printf ("Indica el tipo de conversion: binario (1), octal (2): ");	
	   scanf ("%i", &opcion);
	   printf ("\n"); // Imprime un salto de línea.
    }
 
    // Si introducimos un "1", la base cambiará a 2 para la conversión a binario.
 
    if (opcion == 1) 
    {
	   printf ("El numero %i en decimal equivale al binario: ", numero);
       base = 2;
    }
 
    // Si introducimos un "2", la base cambiará a 8 para la conversión a octal.
 
    if (opcion == 2) 
    {
	   printf ("El numero %i en decimal equivale al octal: ", numero);
       base = 8;
    }
 
    // Al principio hemos definido el array de tipo entero "resto" al que le asignamos una extensión máxima de 50.
    // Un array es un medio de guardar un conjunto de objetos de la misma clase. Podemos acceder a cada elemento 
    // individual del array mediante un número entero denominado índice. "0" es el índice del primer elemento. 
    // En cada elemento es posible almacenar un número distinto.
  
    // Comprendido esto, hemos definido una variable entera "a" a la que vamos a dar el valor de "0". 
 
    for ( a = 0 ; a < 50 ; a++ ) 
    
    { // Inicio FOR a.
		
       resto[a] = numero % base; // Guardamos el resto de la división en el array resto[0] dado que "a=0".
                                 // En la próxima repetición del "for", "a" será  igual a "1", por lo que
                                 // el próximo resultado se almacenará en el array resto[1] dado que "a=1".
                                  
       numero = numero / base; // Ahora dividimos el número entre a base y volvemos a empezar.
       if (numero == 0) break; // Si número es igual a 0, se rompe la cadena y pasamos al siguiente "for".
       
    } // Fin FOR a.
    
    
    // Ya tenemos almacenado nuestro número en el array "resto[50]" pero está al revés, por lo que debemos darle
    // la vuelta. Para ello iniciaremos otro "for" utilizando la variable entera "b" a la que daremos el valor de "a".
    // Esto quiere decir que si "a=5", "b" será igual a "5", por lo que podremos imprimir el número desde el final para
    // darle la vuelta.
    
    for ( b = a ; b >= 0 ; b-- )
    
    { // Inicio FOR b.
		
		printf ("%i", resto[b]); 
		
	} // Fin FOR b.
 
   return 0;
}
