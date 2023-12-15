/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fazzurri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:04:57 by fazzurri          #+#    #+#             */
/*   Updated: 2023/12/14 15:55:40 by fazzurri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	my_isspace(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n'
		|| ch == '\r' || ch == '\f' || ch == '\v')
	{
		return (1);
	}
	else
		return (0);
}

void	skip_backspace(char **s)
{
	char	c;

	c = **s;
	while (my_isspace(c) == 1)
	{
		(*s)++;
		c = **s;
	}
}

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	skip_backspace(&(str));
	while (*str && (*str < 48 || *str > 57))
	{
		if (*str == '-')
			sign = sign * -1;
		else if ((*str < 48 || *str > 57) && *str != '+')
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (sign * number);
}
