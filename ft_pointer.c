/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:55:07 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/09 18:22:53 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long x)
{
	int	i;

	i = 2;
	write (1, "0x", 2);
	i += ft_hex_len(x);
	ft_prn_hex(x, 0);
	return (i);
}
