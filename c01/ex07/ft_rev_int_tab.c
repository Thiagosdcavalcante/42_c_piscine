/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantana <thiagosantanadantas@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:04:29 by tsantana          #+#    #+#             */
/*   Updated: 2023/09/13 20:04:29 by tsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a ^ *b, *b = *a ^ *b, *a = *a ^ *b;
}

void ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	end_tab;

	end_tab = size - 1;
	count = 0;
	while (count < size)
	{
		ft_swap(&tab[count], &tab[end_tab]);
		count++;
		end_tab--;
	}
}
