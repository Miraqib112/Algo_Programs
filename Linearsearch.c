#include <stdio.h>
int main()
{
    bool flag = false;
    int element, i;
    int arr[10] = {1, 2, 44, 12, 41, 21, 4, 0, 9, 10};

    printf("Enter the element you want to search: ");
    scanf("%d",&element);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == element)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        printf("The element is present at index %d",i);
    }
    else
    {
        printf("The element is not present in the array.\n");
    }
    return 0;
}
