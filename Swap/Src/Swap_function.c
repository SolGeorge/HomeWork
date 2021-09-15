#include <stdio.h>

#include "Swap_function.h"
 

 void swap_view(int number_1, int number_2)
 {
    int number_temp;

    number_temp = number_1;
    number_1    = number_2;
    number_2    = number_temp;

     printf("\n%d\t%d", number_1, number_2);
 }

 void swap_pointer(int *number_1, int *number_2)
 {
    int number_temp;

     number_temp = *number_1;
    *number_1    = *number_2;
    *number_2    =  number_temp;

	 printf("\n%d\t%d", *number_1, *number_2);
 }
 void swap_XOR(int *number_1, int *number_2)
 {
    *number_1 = *number_1^ *number_2;
    *number_2 = *number_1^ *number_2;
    *number_1 = *number_1^ *number_2;

     printf("\n%d\t%d", *number_1, *number_2);
 }

int verificare_int(int verifey)
{
    printf("\nIntrodu un numar: ");

    while(scanf("%d", &verifey) != 1 )
    {   
        printf("\nNu ai introdus un numar!");
        printf("\nMai incearca!");    
        fflush(stdin);
        printf("\nIntrodu un numar: ");      
    }
  
    printf("\nNumarul introdus este: %d.\n",verifey);
 	
    return verifey;
}
int verificare_char(char simbol)
{
    printf("\nIntrodu un simbol: ");

    fflush(stdin);

    while(scanf("%c", &simbol) != 1 )
    {   
        printf("\nNu ai introdus un simbol!");
        printf("\nMai incearca!");    
        printf("\nIntrodu un simbol: ");
        fflush(stdin);   
    }
    return simbol;
}