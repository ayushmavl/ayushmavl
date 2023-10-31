#include<stdio.h>

int factorial(int n);
 int main () 
 {
     printf("the factorial :%d",factorial(6));
     return 0;
 }

 int factorial(int n)
 {
      if(n==0)
{
return 1;
} 
     int nume = factorial(n-1);
     int nunu=  nume*n;
     return nunu;
 }
