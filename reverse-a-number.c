#include <stdio.h>
 
int main() {
 
    int num;
    int rest;  
 
    printf("Set an integer number: ");             
    scanf("%i", &number); 
    printf("\n"); 
    printf("Your reversed number is: ");
 
    while(number > 0) {
         rest = num % 10;             
         num = num / 10; 
         printf("%i", rest);  
    }
 
    return 0;
}
