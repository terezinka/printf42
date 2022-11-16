/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:25:45 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/09 18:00:49 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		i = ft_putstr("(null)");
		return (i);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return ((int)i);
}
