#include <stdio.h>

int main()
{
    int num;
   printf("Enter any num: ");
    scanf("%d", &num);
    if(num > 1)
    {
        printf("Numb is POSITIVE");
    }
    if(num < 1)
    {
        printf("Num is NEGATIVE");
    }
    if(num == 1)
    {
        printf("Num is ZERO");
    }

    return 0;
}
