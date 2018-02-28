# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 00:05:50 by ssi-moha          #+#    #+#              #
#    Updated: 2017/11/07 14:19:12 by ssi-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all :
	gcc -c ft_display_file.c
	ar rc libft.a *.o
	gcc -o ft_display_file libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f ft_display_file

re: fclean all
