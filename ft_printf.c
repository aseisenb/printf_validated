/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseisenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:54:40 by aseisenb          #+#    #+#             */
/*   Updated: 2022/06/08 17:28:02 by aseisenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_helper(va_list arg, char c, int *len)
{
	char			*basemax;
	char			*basemin;

	basemax = "0123456789ABCDEF";
	basemin = "0123456789abcdef";
	if (c == '%')
		ft_putchar_pf('%', len);
	if (c == 'c')
		ft_putchar_pf(va_arg(arg, int), len);
	if (c == 's')
		ft_putstr_pf(va_arg(arg, char *), len);
	if (c == 'd' || c == 'i')
		ft_putnbr_pf(va_arg(arg, int), len);
	if (c == 'u')
		ft_putnbru_pf(va_arg(arg, unsigned int), len);
	if (c == 'X')
		ft_putnbr_base_pf(va_arg(arg, unsigned int), basemax, len);
	if (c == 'x')
		ft_putnbr_base_pf(va_arg(arg, unsigned int), basemin, len);
	if (c == 'p')
		function_p(va_arg(arg, unsigned long int), len);
}

void	function_p(unsigned long int i, int *len)
{
	if (i == 0)
		ft_putstr_pf("(nil)", len);
	else
	{
		ft_putstr_pf("0x", len);
		ft_putnbr_base_pf(i, "0123456789abcdef", len);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	if (!str)
		return (0);
	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_helper(arg, str[i + 1], &len);
			i += 2;
		}
		else
		{
			ft_putchar_pf(str[i], &len);
			i++;
		}
	}
	va_end(arg);
	return (len);
}
