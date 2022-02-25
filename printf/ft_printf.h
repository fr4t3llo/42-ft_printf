/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 22:36:41 by skasmi            #+#    #+#             */
/*   Updated: 2021/12/12 22:55:11 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	print(char c, va_list cp, int *s);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_unsigned_int(unsigned int n);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_hexa(unsigned long n, int s);

#endif
