#include <stdio.h>
 
int main () { 
 
   int number; 
   int spaces; . 
   int increase_number; 
   int decrease_number; 
   int line_counter; 
   int character_counter; 
   int counter_spaces; 
   
   printf ("Set a number between 0 and 9: ");
   scanf ("%i", &number); 
   printf ("\n"); 
 
   spaces = number + 4; 
   increase_number = 1;
   decrease_number = 0;
 
   for (  line_counter = number ;  line_counter > 0 ;  line_counter--) { 
	   
      for ( counter_spaces = spaces ; counter_spaces > 0 ; counter_spaces--) { 	   
         printf (" ");
      }     
	   
      number = 1;
	   
      for ( character_counter = increase_number ; character_counter > 0 ; character_counter--) { 	  
         printf ("%i", number);
         number++;
      } 
	   
      number = number - 2;
      
      for ( character_counter = decrease_number ; character_counter > 0 ; character_counter--) { 	  
         printf ("%i", number);
         number--; 
      } 
 
      spaces--;
      increase_number++; // |  1...   |  12...  |  123...  |  1234...  |
      decrease_number++; // |  ....   |  1....  |  21....  |  321....  |
      printf ("\n"); 
 
   } 
 
   return 0;
   
} 
