/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantana <thiagosantanadantas@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:33:57 by tsantana          #+#    #+#             */
/*   Updated: 2023/09/15 17:47:08 by tsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	resulta;
	int	resultb;

	resulta = *a / *b;
	resultb = *a % *b;
	*a = resulta;
	*b = resultb;
}
