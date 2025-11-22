#include "ft_putchar.h"

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        return;

    for (int row = 0; row < y; row++)
    {
        for (int col = 0; col < x; col++)
        {
            if ((row == 0 && (col == 0 || col == x - 1)) ||
                (row == y - 1 && (col == 0 || col == x - 1)))
                ft_putchar('o');
            else if (row == 0 || row == y - 1)
                ft_putchar('-');
            else if (col == 0 || col == x - 1)
                ft_putchar('|');
            else
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

