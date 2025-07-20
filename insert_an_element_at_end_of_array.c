#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int size, element;
    printf("Enter size of array");
    scanf("%d", &size);
    if (size < 0 || size >= MAX)
    {
        printf("Invalid Size");
        return 1;
    }
    printf("Enter %d elements", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (size >= MAX)
    {
        printf("Cannot insert more elements. Array is full");
        return 1;
    }
    printf("Enter element to insert at end:");
    scanf("%d", &element);
    arr[size] = element;
    size++;
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}