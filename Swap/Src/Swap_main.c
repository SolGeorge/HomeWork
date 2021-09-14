#include <stdio.h>

#include "Swap_functions.h"


int verificare(int a)
{
    printf("\nIntrodu un numar: ");

    if(scanf("%d", &a) != 1 )
    {   
        printf("\nNu ai introdus un numar!");
        printf("\nMai incearca!");    
        fflush(stdin);
            
        return verificare(a);   
    }
    else
    {   
    	printf("\nNumarul introdus este: %d.\n",a);
            
    	return 0;	
    }
    
}

int main()
{
    int x , y ;
    
    verificare(x);
    verificare(y);
        
    permanent_swap(&x, &y);

    swap(x, y);


    return 0;
}
