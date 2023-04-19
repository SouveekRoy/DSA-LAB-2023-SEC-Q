#include<stdio.h>  
#include<conio.h>  
int display(int a[],int n)
{ 
    int i;
    printf ("\n The resultant array is: \n"); 
    for(i=0;i<n;i++)
   {
   printf("a[%d]: %d \n",i,a[i]);
   }
}  
int delete(int a[],int n)
{
    int pos,i; 
    printf( " Define the position of the array element where you want to delete: \n ");  
    scanf(" %d", &pos); 
    for(i=pos-1;i<n-1;i++)  
        {  
            a[i]=a[i+1]; 
        }  
        n=n-1;
    
    display(a,n);
}
int main ()  
{ 
    int a[40],pos,i,n;
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
    delete(a,n);
    return 0;
} 
    
    
    
  
