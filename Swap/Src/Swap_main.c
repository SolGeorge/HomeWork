#include <stdio.h>

#include "Swap_function.h"


int main()
{
    int numarul_1 , numarul_2 ;
    
    numarul_1= verificare_int(numarul_1);
    numarul_2= verificare_int(numarul_2);
    
	printf("\nNumerele introduse sunt: %d si %d",numarul_1 ,numarul_2);  

    char simbol;

    mai_incearca:

    printf("\nPentru a face un swap prebuie sa introduci un simbol!");
    printf("\nIntrodu \"#\" pentru swap_view!");
    printf("\nIntrodu \"$\" pentru swap_pointer!");
    printf("\nIntrodu \"&\" pentru swap_XOR!");
    
    simbol= verificare_char(simbol);

    switch(simbol)
    {
    case '#': 
    swap_view(numarul_1, numarul_2);
    break;

    case '$': 
    swap_pointer(&numarul_1, &numarul_2);
    break;

    case '&':
    swap_XOR(&numarul_1, &numarul_2);
    break;
    
    default:
    printf("Nu ai introdus un simbol valid!");
    }
    
    goto mai_incearca;
    return 0;
}
