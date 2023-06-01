/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseisenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:20:05 by aseisenb          #+#    #+#             */
/*   Updated: 2022/06/08 17:23:37 by aseisenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_pf(unsigned long i, char *base, int *len)
{
	if (i >= (unsigned long)ft_strlen_pf(base))
	{
		ft_putnbr_base_pf(i / ft_strlen_pf(base), base, len);
		ft_putnbr_base_pf(i % ft_strlen_pf(base), base, len);
	}
	else
		ft_putchar_pf(base[i], len);
}

void	ft_putnbr_pf(int i, int *len)
{
	long int	nb;

	nb = (long int) i;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_pf('-', len);
	}
	if (nb >= 10)
	{
		ft_putnbr_pf(nb / 10, len);
		ft_putnbr_pf(nb % 10, len);
	}
	else
		ft_putchar_pf(nb + '0', len);
}

void	ft_putnbru_pf(unsigned int i, int *len)
{
	if (i >= 10)
	{
		ft_putnbru_pf(i / 10, len);
		ft_putnbru_pf(i % 10, len);
	}
	else
		ft_putchar_pf(i + '0', len);
}
