/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:32:51 by thibnguy          #+#    #+#             */
/*   Updated: 2022/12/05 15:35:58 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putaddr(unsigned long long nb, char *base)
{
	if (nb >= 16)
	{
		ft_putaddr(nb / 16, base);
		ft_putaddr(nb % 16, base);
	}
	else
		ft_putchar(base[nb]);
	if (nb == 0)
		return (3 + ft_nblen(nb, base));
	return (2 + ft_nblen(nb, base));
}
