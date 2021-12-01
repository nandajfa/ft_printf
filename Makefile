# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 10:34:38 by jefernan          #+#    #+#              #
#    Updated: 2021/11/30 11:05:07 by jefernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror
AR		=	ar
ARFLAGS	=	-rcs
LIBFT = ./libft/libft.a

SRCS	=

OBJS	= ${SRCS:.c=.o}

RM		=	rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${LIBFT}
			cp libft/libft.a $(NAME)
			${AR} ${ARFLAGS} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re