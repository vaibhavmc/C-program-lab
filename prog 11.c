#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   long long fact=1;
   int a=0, b=1, c;

   printf("Enter a non-negetive integer:");
   scanf("%d", &n);

   //Factorial
   for(i=1; i<n; i++)
    fact=fact*i;

   printf("Factorial=%11d\n", fact);

   //Fibonacci series
   printf("Fibonacci series:");
   for(i=1; i<=n; i++)
   {
     printf("%d",a);
     c=a+b;
     a=b;
     b=c;
   }

    return 0;
}
