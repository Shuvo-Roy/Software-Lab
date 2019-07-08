
#include<stdio.h>
int main()
{
    int i,j,n,temp;
     printf("Enter Number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    printf(" Enter %d elements of an Array :", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
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
