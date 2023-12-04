/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fazzurri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:20:33 by fazzurri          #+#    #+#             */
/*   Updated: 2023/12/04 15:48:23 by fazzurri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;	
	int	b;	
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				write(1, &"0123456789"[a], 1);
				write(1, &"0123456789"[b], 1);
				write(1, &"0123456789"[c], 1);
				if (!(a == 7 && b == c == 9))
				{
					write(1, ", ", 2);
				}
				else	{
					write(1, "\n", 1);
				}