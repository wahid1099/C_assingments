#include <stdio.h>

int main()
{
    int i, j, N;
   float  sum=0;
   float avarage;




    for(i=1; i<=6; i++)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
            sum +=i;

        }

         printf("*");
        printf("\n");
    }
    printf("Sum of pattern = %.f\n",sum);
    avarage=sum/6;
     printf("Average of patterns = %.3f",avarage);

    return 0;
}

