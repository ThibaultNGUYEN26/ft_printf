/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:33:02 by thibnguy          #+#    #+#             */
/*   Updated: 2022/12/02 19:13:49 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_addr(unsigned long long nb, char *base)
{
	if (nb >= (unsigned long long)ft_strlen(base))
	{
		ft_addr(nb / ft_strlen(base), base);
		ft_addr(nb % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nb]);
	return (ft_nbsize(nb));
}
