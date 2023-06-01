/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseisenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:20:45 by aseisenb          #+#    #+#             */
/*   Updated: 2022/06/07 17:26:27 by aseisenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_pf(char c, int *len)
{
	write(1, &c, 1);
	*len += 1;
}

void	ft_putstr_pf(char *str, int *len)
{
	int	i;

	i = 0;
	if (str == NULL)
		ft_putstr_pf("(null)", len);
	else
	{
		while (str[i])
		{
			ft_putchar_pf(str[i], len);
			i++;
		}
	}
}

int	ft_strlen_pf(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
