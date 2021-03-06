/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:47:28 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/01 11:52:45 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo/philosophers.h"

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\f' || c == '\r' || c == '\v' \
					|| c == ' ' || c == '\n');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -sign;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = ((nb * 10) + (str[i] - 48));
		i++;
	}
	return (nb * sign);
}
