//Write a program to implement binary search on array elements using UDF
#include <stdio.h>
int bsearch(int list[], int lb, int ub, int sitem)
{
    int mid, pos = -1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (list[mid] == sitem)
            return (mid + 1);
        else if (list[mid] > sitem)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    return (pos);
}
int main()
{
    int list[100], sitem, n, i;
    printf("Enter the number of elemnts:");
    scanf("%d", &n);
    printf("Enter the elemnts:");
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    printf("The items are as follows:\n");
    for (i = 0; i < n; i++)
        printf("list[%d] :%d\n", i, list[i]);
    printf("Enter the item to search:\n");
    scanf("%d", &sitem);
    int b = bsearch(list, 0, n - 1, sitem);
    if (b == -1)
        printf("Element %d is not presnt",sitem);
    else
        printf("Element %d is present at %d position",sitem,b);
    return 0;
}
