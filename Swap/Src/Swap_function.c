#include <stdio.h>

#include "header.h"
 

 void swap(int a, int b)
 {
     int p;

     p= a;
     a= b;
     b= p;

     printf("\n%d\t%d", a , b);
 }

 void permanent_swap(int *a, int *b)
 {
     int p;

      p= *a;
     *a= *b;
     *b=  p;

	 printf("\n%d\t%d", *a , *b);
 }

