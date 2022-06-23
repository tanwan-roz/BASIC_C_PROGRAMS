#include <stdio.h>
#include <stdlib.h>

int main()
{
 float principal, rate, time, SI;

 printf("Enter principal:");
 scanf("%f", &principal);

 printf("Enter rate:");
 scanf("\n%f", &rate);

 printf("Enter time:");
 scanf("\n%f", &time);

 SI = (principal*rate*time)/100;
 printf("simple interest:%f",SI);

 }
