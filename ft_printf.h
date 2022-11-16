/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:10:47 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/11 16:59:32 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_char(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
int				ft_percent(void);
int				ft_printf(const char *s, ...);
int				ft_hex(unsigned int x, char c);
int				ft_pointer(unsigned long long x);
int				ft_putunbr(unsigned int n);
unsigned int	num_size(int num);
void			ft_prn_hex(unsigned long long x, char c);
int				ft_hex_len(unsigned long long num);
int				ft_formats(va_list arg, char c);
int				ft_find_nbr_len(unsigned int n);
int				ft_count_num(int n);
void			ft_printnbr(int n);
char			*ft_itoa(int n);

#endif
