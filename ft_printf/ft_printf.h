/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:05:49 by thibnguy          #+#    #+#             */
/*   Updated: 2022/12/02 19:14:28 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_strlen(char *s);
void	ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_nbsize(int n);
int		ft_putnbr_base(int nb, char *base);
int		ft_addr(unsigned long long nb, char *base);
int		ft_percentage(void);

#endif
