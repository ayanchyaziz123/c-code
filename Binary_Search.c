#include <stdio.h>

void binarySearch(int n, int arr[], int search)
{
    int l, r;
    l = 0;
    r = n - 1;
    int mid = (l + r) / 2;
    while (r >= l)
    {
        if (arr[mid] == search)
        {
            printf("%d is present at location %d.\n", search, mid + 1);
            break;
        }
        else if (arr[mid] < search)
        {
            l = mid + 1;
        }
        else if (arr[mid] > search)
        {
            r = mid - 1;
        }
        mid = (l + r) / 2;
    }
    if (l > r)
    {
        printf("Not found! %d isn't present in the list.\n", search);
    }
}

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
    binarySearch(n, arr, search);

    return 0;
}