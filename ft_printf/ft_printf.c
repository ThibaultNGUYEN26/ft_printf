/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:58:45 by thibnguy          #+#    #+#             */
/*   Updated: 2022/12/05 15:39:38 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_write(char s, va_list ap)
{
	size_t	len;

	len = 0;
	if (s == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (s == 'p')
	{
		write(1, "0x", 2);
		return (ft_putaddr(va_arg(ap, unsigned long long), "0123456789abcdef"));
	}
	else if (s == 'd' || s == 'i')
		return (ft_putnbr_base(va_arg(ap, int), "0123456789"));
	else if (s == 'u')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789"));
	else if (s == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (s == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (s == '%')
		return (ft_percentage());
	return (0);
}

int	ft_printf(const char *s, ...)
{
	size_t	i;
	int		counter;
	va_list	ap;

	i = -1;
	counter = 0;
	va_start(ap, s);
	while (s[++i])
	{
		if (s[i] != '%')
			counter += write(1, &s[i], 1);
		else
		{
			i++;
			counter += ft_write(s[i], ap);
		}
	}
	va_end(ap);
	return (counter);
}
