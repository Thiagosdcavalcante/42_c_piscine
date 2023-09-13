/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantana <thiagosantanadantas@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:31:56 by tsantana          #+#    #+#             */
/*   Updated: 2023/09/12 16:31:56 by tsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	newnumbr;

	newnumbr = (long)nb;
	if (newnumbr < 0)
	{
		newnumbr = newnumbr * (-1);
		ft_putchar('-');
	}
	if (newnumbr <= 9)
	{
		ft_putchar(newnumbr + '0');
	}
	if (newnumbr >= 10)
	{
		ft_putnbr(newnumbr / 10);
		ft_putnbr(newnumbr % 10);
	}
}