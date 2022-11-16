/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:35:16 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/10 16:26:10 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned long long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	ft_prn_hex(unsigned long long x, char c)
{
	if (x == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (x >= 16)
	{
		ft_prn_hex(x / 16, c);
		ft_prn_hex(x % 16, c);
	}
	else
	{
		if (x <= 9)
			ft_char(x + '0');
		if (x > 9 && c == 'X')
			ft_char(x - 10 + 'A');
		if (x > 9 && c != 'X')
			ft_char (x - 10 + 'a');
	}
}

int	ft_hex(unsigned int x, char c)
{
	int	len;

	len = ft_hex_len(x);
	ft_prn_hex(x, c);
	return (len);
}

// int main (int arg, const char *argv[])
// {
// 	ft_hex(66, 'c');
// }