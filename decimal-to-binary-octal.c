#include <stdio.h>
 
int main () {
 
	int number; 
	int base; 
	int option = 0; 
	int rest[50]; 
    int a; 
    int b; 
 
	printf ("Set an integer number: ");
	scanf ("%i", &number);
	printf ("\n");  
 
	while (option < 1 || option > 2) {   
	   printf ("Set the type of conversion: binary (1), octal (2): ");	
	   scanf ("%i", &option);
	   printf ("\n"); 
    }
 
    if (option == 1) {
	   printf ("The number %i in decimal is equivalent to binary: ", number);
       base = 2;
    }
 
    if (option == 2) {
	   printf ("The number %i in decimal is equivalent to octal: ", number);
       base = 8;
    }
 
    for ( a = 0 ; a < 50 ; a++ ) { 
       rest[a] = number % base;                         
       number = number / base; 
       if (number == 0) break; 
    }
    
    for ( b = a ; b >= 0 ; b-- ) { 
		printf ("%i", rest[b]); 
	} 
 
    return 0;
}
