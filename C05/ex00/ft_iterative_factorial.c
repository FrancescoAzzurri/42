/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fazzurri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 03:02:18 by fazzurri          #+#    #+#             */
/*   Updated: 2023/12/20 03:10:13 by fazzurri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb -1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (factorial > 0)
	{
		nb = nb * factorial;
		factorial--;
	}
	return (nb);
}
