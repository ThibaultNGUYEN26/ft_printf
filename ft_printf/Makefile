# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 18:04:05 by thibnguy          #+#    #+#              #
#    Updated: 2022/12/02 19:14:51 by thibnguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = -I ./includes
OBJS = ${SRCS:.c=.o}

SRCS = ft_printf.c ft_strlen.c ft_putchar.c ft_putstr.c ft_nbsize.c ft_putnbr_base.c ft_percentage.c ft_addr.c

${NAME} : ${OBJS}
	ar -rcs ${NAME} ${OBJS}

all : ${NAME}

.c.o:
	${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

clean :
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re