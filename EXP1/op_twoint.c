#include<stdio.h>
int sum(int x,int y)
{
	int z;
	z=x+y;
	printf("Sum of %d and % d is: %d \n",x,y,z);
}
int sub(int x,int y)
{
	int z;
	z=x-y;
	printf("Sub of %d and % d is: %d \n",x,y,z);
}
int mult(int x,int y)
{
	int z;
	z=x*y;
	printf("Mult of %d and % d is: %d \n",x,y,z);
}
int div(int x,int y)
{
	int z;
	z=x/y;
	printf("Div of %d and % d is: %d \n",x,y,z);
}
int main()
{
	int a,b;
	printf("Enter two values: ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);
	return 0;
}