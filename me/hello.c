#include <stdio.h>

int main(void)
{
    char name[100];

    printf("What's your name? ");
    if (scanf("%99s", name) != 1)
    {
        return 1;
    }

    printf("hello, %s\n", name);
    return 0;
}
