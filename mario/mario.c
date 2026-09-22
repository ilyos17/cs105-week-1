#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Height: ");
        scanf("%d", &n);
  
    }
    while (n <= 1);

    int k = n - 1;
    int l = 1;

    while (k >= 0)
    {
        for (int i = 0; i < k; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < 2 * l; i++)
        {
            printf("#");
        }

        printf("\n");
        l++;
        k--;
    }

    return 0;
}
