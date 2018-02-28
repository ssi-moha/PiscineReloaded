# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 22:02:44 by ssi-moha          #+#    #+#              #
#    Updated: 2017/11/06 22:58:08 by ssi-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	srcs/
HEADER	=	includes/

all: 	$(NAME)

$(NAME):
	gcc -I$(HEADER) -c $(SRC)ft_putchar.c $(SRC)ft_putstr.c \
	$(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a

clean:
	rm -f *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
