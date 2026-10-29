#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,original,digit;
   int count=0,sum=0,revers=0;

   printf("Enter a positive integer:");
   scanf("%d", &n);

   original=n;
   while(n>0)
   {
       digit=n% 10;

       sum=sum+digit;
       revers=revers*10+digit;
       count++;

       n=n/10;
   }
   printf("Number of digits= %d\n",count);
   printf("Sum of digits= %d\n",sum);
   printf("Reversed number= %d\n", revers);

   if(original==revers)
    printf("%d is a palindrome.\n",original);
   else
    printf("%d is not a palindrome.\n",original);
    return 0;
}
