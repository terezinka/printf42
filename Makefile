# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 12:06:54 by tbezkoro          #+#    #+#              #
#    Updated: 2022/11/11 17:02:26 by tbezkoro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -c -Wall -Werror -Wextra

 SRC =	ft_char.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_percent.c \
	ft_printf.c \
	ft_hex.c \
	ft_pointer.c \
	ft_putunbr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC)
		ar rc $(NAME) *.o

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re:
		make fclean
		make all