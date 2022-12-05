/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:31:02 by thibnguy          #+#    #+#             */
/*   Updated: 2022/12/04 15:29:48 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
	else
		return (write(1, "(null)", 6), 6);
	return (ft_strlen(s));
}
