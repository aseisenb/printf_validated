/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseisenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:30:16 by aseisenb          #+#    #+#             */
/*   Updated: 2022/06/09 16:19:09 by aseisenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_pf(char c, int *len);
void	ft_putstr_pf(char *str, int *len);
void	ft_putnbr_base_pf(unsigned long i, char *base, int *len);
void	ft_putnbr_pf(int i, int *len);
void	ft_putnbru_pf(unsigned int i, int *len);
int		ft_strlen_pf(const char *str);
void	ft_helper(va_list arg, char c, int *len);
void	function_p(unsigned long int i, int *len);

#endif
