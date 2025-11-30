#include <stdio.h>

void swap(int a, int b)
{

    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a, b;
    printf("Enter the Fast Number:");
    scanf("%d", &a);
    printf("Enter the Seocond Number:");
    scanf("%d", &b);
    printf("\nBefore Swap a=%d b=%d", a, b);
    swap(a, b);
    printf("\nAfter Swap a=%d b=%d", a, b);  // Because Call By Value Not Changeable Value Not Effect Original Value..

    return 0;
}