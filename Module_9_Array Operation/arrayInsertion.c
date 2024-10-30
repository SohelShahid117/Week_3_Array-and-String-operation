#include <stdio.h>

int main()
{
    printf("hello\n");

    int length;
    scanf("%d", &length);

    int a[length];

    // scanf("%d",&length);
    // int a[100000];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("now print the value:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", a[i]);
    }
    /*
    scanf("%d",&a[2]);
    scanf("%d",&a[4]);

    printf("now print the value:\n");
    for(int i=0;i<length+2;i++){
        printf("%d\n",a[i]);
    }
    */

    int index, value;
    scanf("%d %d", &index, &value);
    length++;

    printf("now print the value:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", a[i]);
    }

     for (int i =length-1; i>index ; i--)
    {
        a[i+1]=a[i];
    }
    a[index]=value;

       printf("now print the value:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", a[i]);
    }


    return 0;
}