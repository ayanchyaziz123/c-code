#include <stdio.h>

int binarySearch(int n, int arr[], int search)
{
    int l, r;
    l = 0;
    r = n - 1;
    int mid = (l + r) / 2;
    while (r >= l)
    {
        if (arr[mid] == search)
        {
            return mid;
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
        return -1;
    }
}

void deletionInArray(int n, int arr[], int value)
{
    int x = binarySearch(n, arr, value);
    int i;
    int j = 0;
    int s = 0;
    int brr[n];
    if (x != -1)
    {
        for (i = 0; i < n; i++)
        {
            if (i != x)
            {
                brr[j] = arr[i];
                j++;
            }
        }
        s = j;
        printf("Resultant array : ");
        for (j = 0; j < s; j++)
        {
            printf("%d ", brr[j]);
        }
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
    int value;

    printf("Enter the value to Delete : ");
    scanf("%d", &value);
    deletionInArray(n, arr, value);

    return 0;
}