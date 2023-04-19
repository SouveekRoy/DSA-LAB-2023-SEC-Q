#include<stdio.h>
#include<conio.h>
int display(int a[],int n)
{
    int i;
printf("The array after inserting the new element is \n");
for(i=0;i<n;i++)
   {
   printf("a[%d]: %d \n",i,a[i]);
   }

}
int insert(int a[],int n)
{
    int pos,i,item;
    printf("enter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("enter the item into that poition:");
    scanf("%d",&item);
    for(i=n-1;i>=pos-1;i--)
    {
    a[i+1]=a[i];
    }
    a[pos-1]=item;
    n=n+1;
    display(a,n);
    
}
int main()
{
   int a[40],pos,i,n,item;
   printf("enter no of elements in array: ");
   scanf("%d",&n);
   printf("enter %d elements:\n",n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   printf("a[%d]: %d \n",i,a[i]);
   }
   insert(a,n);
   return 0;
}