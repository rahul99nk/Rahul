#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Height: ");
    } while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int y = 0; y < n; y++)
        {
            if (i + y >= n - 1)
            printf ("#");

            else
            printf(" ");
        }
        printf ("\n");
    }

}