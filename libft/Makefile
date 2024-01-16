# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naherbal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 20:28:19 by naherbal          #+#    #+#              #
#    Updated: 2023/10/10 14:35:34 by naherbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_atoi.c		\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memmove.c	\
		ft_strdup.c		\
		ft_strlcat.c	\
		ft_strlen.c		\
		ft_strtrim.c	\
		ft_toupper.c	\
		ft_bzero.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_memcpy.c		\
		ft_memset.c		\
		ft_strjoin.c	\
		ft_strlcpy.c	\
		ft_strncmp.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_memcmp.c		\
		ft_memchr.c		\
		ft_strnstr.c	\
		ft_calloc.c		\
		ft_substr.c		\
		ft_split.c		\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\

OBJ		=	$(SRC:.c=.o)

NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

HEADERS	=	-I includes -c

RM		=	rm -rf

LIB		=	ar rcs

all:		$(NAME)

$(NAME):	$(OBJ)
			cc $(CFLAGS) $(HEADERS) $(SRC)
			$(LIB) $(NAME) $(OBJ) && ranlib $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
