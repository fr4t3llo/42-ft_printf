# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skasmi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 23:18:28 by skasmi            #+#    #+#              #
#    Updated: 2021/12/13 23:38:34 by skasmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c ft_printf_function.c\


OBJECTS = $(SOURCES:.c=.o)

DEFS = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJECTS) $(DEFS)
				ar rc $(NAME) $(OBJECTS)

clean :
				rm -rf $(OBJECTS)

fclean : clean
				rm -rf $(NAME)

re : fclean all
