/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:32:37 by melaouad          #+#    #+#             */
/*   Updated: 2019/11/14 20:50:02 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check(int s, int counter, int result)
{
	if (counter > 19)
	{
		if (s > 0)
			return (-1);
		else
			return (0);
	}
	return (s * result);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		s;
	int		result;
	int		counter;

	counter = 0;
	i = 0;
	s = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' '
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
		counter++;
	}
	return (check(s, counter, result));
}
