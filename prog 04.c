#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three integers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("All three numbers are equal.\n");
    }
    else if(a==b)
    {
        if(a>c)
        {
            printf("largest=%d\n",a);
        }
        else
        {
            printf("largest=%d\n",c);
        }
        printf("First and second numbers are equal.\n");
    }
    else if(a==c)
    {
        if(a>b)
        {
            printf("largest=%d\n",a);
        }
        else
        {
            printf("largest=%d\n",b);
        }
        printf("First and third numbers are equal.\n");
    }
    else if(b==c)
    {
        if(b>a)
        {
            printf("Largest=%d\n",b);
        }
        else
        {
            printf("Largest=%d\n",a);
        }
        printf("second and third numbers are equal.\n");
    }
    else
    {
        if(a>b)
        {
            if(a>c)
            {
                printf("largest=%d\n",a);
            }
            else
            {
                printf("Largest=%d\n",c);
            }
        }
        else
        {
            if(b>c)
            {
                printf("Largest=%d\n",b);
            }
            else
            {
                printf("Largest=%d\n",c);
            }
        }
    }

    return 0;
}
