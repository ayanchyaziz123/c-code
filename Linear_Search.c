#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers\n", n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter No %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int search;
    printf("Enter a number to search :");
    scanf("%d", &search);
    int j;
    for (j = 0; j < n; j++)
    {
        if (arr[j] == search)
        {
            printf("%d is present at location %d.\n", search, j + 1);
            break;
        }
    }
    if (j == n)
        printf("%d isn't present in the array.\n", search);

    return 0;
}