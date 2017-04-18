# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchiorea <rchiorea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/28 15:54:27 by rchiorea          #+#    #+#              #
#    Updated: 2017/04/18 12:24:38 by rchiorea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = src/main.c \
	   src/ft_check_map.c \
	   src/ft_draw_line.c \
	   src/ft_error.c \
	   src/ft_map_to_coord.c \
	   src/ft_window_init.c \
	   src/expose_hook.c \
	   src/key_hook.c \
	   src/get_next_line.c

OBJ = main.o\
	  ft_check_map.o\
	  ft_draw_line.o\
	  ft_error.o\
	  ft_map_to_coord.o\
	  ft_window_init.o\
	  expose_hook.o\
	  key_hook.o\
	  get_next_line.o

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
