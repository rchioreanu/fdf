# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchiorea <rchiorea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/28 15:54:27 by rchiorea          #+#    #+#              #
#    Updated: 2017/02/28 15:54:30 by rchiorea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = main.c \
	   ft_check_map.c \
	   ft_draw_line.c \
	   ft_error.c \
	   ft_map_to_coord.c \
	   ft_window_init.c \
	   expose_hook.c \
	   key_hook.c \
	   get_next_line.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@make -C libft/ fclean
	@make -C libft/
	@gcc -Wall -Werror -Wextra -I libft/includes/ -c $(SRCS)
	@gcc -o $(NAME) $(OBJ) -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

clean:
	@/bin/rm -f $(OBJ)
	@make -C libft/ clean

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f libft/libft.a

re: fclean all
