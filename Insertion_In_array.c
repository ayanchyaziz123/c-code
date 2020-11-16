#include <stdio.h>

void insertionInArray(int n, int arr[], int position, int value)
{
    int i;
    for (i = n - 1; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = value;
    printf("Resultant array is : ");

    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);
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
    int position, value;
    printf("Enter the location where you wish to insert an element : ");
    scanf("%d", &position);

    printf("Enter the value to insert : ");
    scanf("%d", &value);
    insertionInArray(n, arr, position, value);



    return 0;
}