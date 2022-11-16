/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:54:38 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/11 15:13:56 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int n)
{	
	long	num;

	num = n;
	if (num < 0)
	{
		ft_char('-');
		num *= -1;
	}
	if (num >= 10)
		ft_printnbr(num / 10);
	ft_char(num % 10 + '0');
}

int	ft_count_num(int n)
{
	int	count;

	if (n > 0)
		count = 0;
	else
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int		i;

	ft_printnbr(n);
	i = ft_count_num(n);
	return (i);
}
// #include <stdio.h>
// int main ()
// {
// 	int a = -24189;
// 	ft_putnbr(a);
// 	printf("\n%d\n", a);
// }