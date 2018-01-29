#include <stdio.h>
int main()
{
    int a=3;

    printf("Entered number ");
    scanf("%d", &a);
    if(number % 3 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    return 0;
}
