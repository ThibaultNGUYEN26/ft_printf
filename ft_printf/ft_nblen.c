/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:36:18 by thibnguy          #+#    #+#             */
/*   Updated: 2022/12/05 15:36:22 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nblen(long n, char *base)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= ft_strlen(base);
		len++;
	}
	return (len);
}
