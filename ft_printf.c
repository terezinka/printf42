/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:08:29 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/11 15:37:58 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list arg, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_char(va_arg(arg, int));
	if (c == 's')
		i += ft_putstr(va_arg(arg, char *));
	if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(arg, int));
	if (c == 'u')
		i += ft_putunbr(va_arg(arg, unsigned int));
	if (c == 'p')
		i += ft_pointer(va_arg(arg, unsigned long long));
	if (c == 'x' || c == 'X')
		i += ft_hex(va_arg(arg, unsigned int), c);
	if (c == '%')
		i += ft_percent();
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c' || s[i] == 's' || s[i] == 'p'
				|| s[i] == 'd' || s[i] == 'i' || s[i] == 'u'
				|| s[i] == 'x' || s[i] == 'X' || s[i] == '%')
			count += ft_formats(arg, s[i]);
		}
		else
			count += ft_char(s[i]);
		i++;
	}
	va_end (arg);
	return (count);
}
