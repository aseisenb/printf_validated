# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aseisenb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 17:48:56 by aseisenb          #+#    #+#              #
#    Updated: 2022/06/08 17:55:52 by aseisenb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
OBJ			= ${SRC:.c=.o}
CC 			= cc
CC_FLAGS 	= -Wall -Wextra -Werror
SRC			= ft_printf.c ft_put.c ft_putnbr_xup.c\

.c.o:
			${CC} ${CC_FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJ}
			ar rcs ${NAME} ${OBJ}

all:		${NAME}

clean:
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re
