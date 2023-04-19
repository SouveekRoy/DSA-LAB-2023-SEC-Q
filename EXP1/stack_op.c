#include<stdio.h>
#include<conio.h>
int TOP=-1;
int push(int stack[],int n,int item)
{
    if(TOP==n-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        TOP++;
        stack[TOP]=item;
    }
}
int pop(int stack[],int n)
{
    int item;
    if(TOP==-1)
    {
        printf("UNDERFLOW");
    }
    else{
        item=stack[TOP];
        TOP--;
        printf("Popped item is %d",item);
    }
}
int display(int stack[])
{
    int i;
    if(TOP==-1)
    {
        printf("Stack is EMPTY!!");
    }
    else
    {
    printf("Elements of stack are");
    for(i=TOP;i>=0;i--)
    {
        printf("\n%d",stack[i]);
    }
    }
}
int main()
{
    int stack[20],n,item,option;
    printf("Enter the size of stack\n");
    scanf("%d",&n);
    do{
        printf("\nEnter your option");
        printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("Enter item to be pushed\n");
            scanf("%d",&item);
            push(stack,n,item);
            break;
        case 2: 
            pop(stack,n);
            break;
        case 3:
            display(stack);
            break;  
        case 4:
            break;
        default:
            printf("Invalid choice ");
        }
    } while(option!=4);
    return 0;
}