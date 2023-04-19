#include<stdio.h>
int max(int a[],int n)
{
    int max,i;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("Maximum of array is: %d \n",max);
}
int min(int a[],int n)
{
    int min,i;
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("Minmum of array is: %d \n",min);
}
int main()
{
    int a[20],i,n,sum;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max(a,n);
    min(a,n);
    return 0;
}