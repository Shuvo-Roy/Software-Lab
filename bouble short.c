
#include<stdio.h>
int main()
{

    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];

                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Array:");
   for(i=0;i<n;i++)
    {
   printf("%d  ",a[i]);
    }
}
