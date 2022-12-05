/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:05:49 by thibnguy          #+#    #+#             */
/*   Updated: 2022/12/05 15:42:02 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int			ft_printf(const char *s, ...);
size_t		ft_strlen(char *s);
int			ft_putchar(char c);
size_t		ft_putstr(char *s);
int			ft_nblen(long n, char *base);
size_t		ft_putnbr_base(long long nb, char *base);
size_t		ft_putaddr(unsigned long long nb, char *base);
int			ft_percentage(void);

#endif
