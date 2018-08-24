
#include<stdio.h>

int findElement(int arr[], int n,
                int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}


int insertSorted(int arr[], int n,
                 int key,
                 int capacity)
{


    if (n >= capacity)
       return n;

    arr[n] = key;

    return (n + 1);
}


int findElement(int arr[], int n,
                int key);


int deleteElement(int arr[], int n,
                  int key)
{

    int pos = findElement(arr, n, key);

    if (pos == - 1)
    {
        printf("Element not found");
        return n;
    }


    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    return n - 1;
}


int main()
{
    int arr[] = {12, 34, 10, 6, 40};

     int choice,i,n=6;
int capacity = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    int position = findElement(arr, n, key);

    if (position == - 1)
        printf("Element not found");
    else
        printf("Element Found at Position: %d", position + 1 );

  switch (choice)
  {case 1:
  printf("\n B4 insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);

  n = deleteElement(arr, n, key);
  printf("\n After insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    break;

  case 2:
  printf("\n B4 deletion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);

     n = insertSorted(arr, n, key, capacity);
    printf("\n After deletion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);
break;
  }
    return 0;
}
