#include <stdio.h>
#include <conio.h>

int main () {
   
   int bills_500, bills_200, bills_100, bills_50, bills_20;
   int bills_10, bills_5, coin_2, coin_1, amount, rest;
   
   printf ("Indicate the amount you want to withdraw (integer numbers): " );
   scanf ("%i", &amount);
   printf ("\n" );
	
   bills_500 = amount / 500;
   rest = amount % 500;
   bills_200 = rest / 200;
   rest = rest % 200;
   bills_100 = rest / 100;
   rest = rest % 100;
   bills_50 = rest / 50;
   rest = rest % 50;
   bills_20 = rest / 20;
   rest = rest % 20;
   bills_10 = rest / 10;
   rest = rest % 10;
   bills_5 = rest / 5;
   rest = rest % 5;
   coin_2 = rest / 2;
   rest = rest % 2;
   coin_1 = rest / 1;
   rest = rest % 1;
	
   if (bills_500 > 0) {
      printf (" bills 500: %i\n", bills_500);
   }	
    
   if (bills_200 > 0) {
      printf (" bills 200: %i\n", bills_200);   
   }	
    
   if (bills_100 > 0) {
      printf (" bills 100: %i\n", bills_100);
   }	
    
   if (bills_50 > 0) {
      printf (" bills 50: %i\n", bills_50);   
   }	
    
   if (bills_20 > 0) {
      printf (" bills 20: %i\n", bills_20);  
   }	
    
   if (bills_10 > 0) { 
      printf (" bills 10: %i\n", bills_10);   
   }	
    
   if (bills_5 > 0) {
      printf (" bills 5: %i\n", bills_5);   
   }	
    
   if (coin_2 > 0) { 
      printf (" coins 2: %i\n", coin_2);   
   }	
    
   if (coin_1 > 0) {
      printf (" coins 1: %i\n", coin_1); 
   }	

   return 0;
   
}
