#include <stdio.h>
int main()
{

    printf("hi\n");
    printf("hello world\n");

    // int a[];
    // int a[] = {};
    // int b[] = {};

    int length1 = 0;
    int length2 = 0;

    int a[length1];
    int b[length2];

    // int length1 = 0;
    // int length2 = 0;

    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}