/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:19:18 by tsantana          #+#    #+#             */
/*   Updated: 2023/08/20 21:01:42 by tsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00print(int x, int y)
{
	int	i;
	int	j;

	i = 0 ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 || i == y -1) && (j == 0 || j == x -1))
				ft_putchar('o');
			else if (i == 0 || i == y -1)
				ft_putchar('-');
			else if (j == 0 || j == x -1)
				ft_putchar('|');
			else
			{
				ft_putchar(' ');
			}	
			j++;
		}
		ft_putchar('\n');
				i++;
	}
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
	}
	else if (y >= 1 && x >= 1)
	{
		rush00print(x, y);
	}
}
