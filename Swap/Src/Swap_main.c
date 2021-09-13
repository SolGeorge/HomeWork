#include <stdio.h>

#include "header.h"

int main()
{
    int x = 2, y = 3;

    permanent_swap(&x, &y);

    swap(x, y);


    return 0;
}
