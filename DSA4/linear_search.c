//Write a program to implement linear search on array elements using UDF
#include <stdio.h>
int linearsearch(int a[], int n, int s_item)
{
    for (int i = 0; i <= n; i++)
    {
        if (a[i] == s_item)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, s_item, totalnumber;
    int a[50];
    printf("Enter the number of elemnts:");
    scanf("%d", &totalnumber);
    printf("Enter the elemnts:");
    for (int i = 0; i < totalnumber; i++)
        scanf("%d", &a[i]);
    printf("The elments are as follows:\n");
    for (int i = 0; i < totalnumber; i++)
        printf("arr[%d] :%d\n", i, a[i]);
    printf("Enter the elemnt u want to search:\n");
    scanf("%d", &s_item);
    int p = linearsearch(a, totalnumber, s_item);
    if (p != -1)
        printf("Element %d found at index %d\n", s_item, p + 1);
    else
        printf("Element %d not found in the array\n", s_item);
    return 0;
}
