void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;

	int	col;

	row = 0;
	col = 0;
	while (row < y)
	{
        while (col < x)
	{
		if ((row == 0 && col == 0) || (row == 0 && col == x - 1))
			ft_putchar('A');
		else if ((row == y - 1 && col == 0) || (row == y - 1 && col == x - 1))
			ft_putchar('C');
		else if (row == 0 || row == y - 1)
			ft_putchar('B');
		else if (col == 0 || col == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		++col;
	}
	col = 0;
	ft_putchar('\n');
	++row;
	}
}

