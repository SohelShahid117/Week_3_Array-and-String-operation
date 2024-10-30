#include <stdio.h>
int main()
{
    printf("hi\n");

    int arrayLength;
    printf("enter the length of array:\n");
    scanf("%d", &arrayLength);

    int A[arrayLength];

    printf("enter the value of array:\n");

    for (int i = 0; i < arrayLength; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("now print the value:\n");

    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("now insert the new index & value of this index:\n");
    int index, value;

    scanf("%d %d", &index, &value);
    printf("%d %d", index, value);
    arrayLength++;

    /*
    int A[3]={1,3,4};
    for(int i=0;i<=5;i++){
        printf("%d\n",A[i]);
    }
    */

    /*
    A[index] = value;

    printf("now print the value after update:\n");

    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    */

    printf("now print the value after new value insert:\n");

    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = arrayLength; i > index; i--)
    {
        A[i - 1] = A[i - 2];
    }
    printf("\n");
    // A[index]=value;
    A[index] = value;

    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}