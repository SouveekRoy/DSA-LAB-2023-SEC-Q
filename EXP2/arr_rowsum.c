#include<stdio.h>
#include<conio.h>
int rowsum(int a[10][10],int m,int n)
{
    int i,j,sum=0;
for (i=0;i<m;++i) 
{
    for (j=0;j<n;++j) 
    {
        sum=sum+a[i][j];
    }
    printf("Sum of the %d row is = %d\n",i,sum);
    sum = 0;
}
}
int colsum(int a[10][10],int m,int n)
{
    int i,j,sum=0;
for (j=0;j<n;++j) 
{
    for (i=0;i<m;++i) 
    {
        sum=sum+a[i][j];
    }
    printf("Sum of the %d col is = %d\n",j,sum);
    sum = 0;
}
}
int main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the row and column size of the matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elemets\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    rowsum(a,m,n);
    colsum(a,m,n);
    return 0;
}