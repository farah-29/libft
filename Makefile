# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fal-edlb <fal-edlb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/15 14:56:52 by fal-edlb          #+#    #+#              #
#    Updated: 2026/10/15 14:57:08 by fal-edlb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the output library
NAME = libft.a

# Compiler and flags required by 42
CC = cc
CFLAGS = -Wall -Wextra -Werror

# List of all your source files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c

# Convert .c source files into .o object files
OBJ = $(SRC:.c=.o)

# Default rule: builds the library
all: $(NAME)

# Rule to create the static library using 'ar'
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Rule to compile individual .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJ)

# Clean up object files and the library itself
fclean: clean
	rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

# Declares rules that don't correspond to actual files
.PHONY: all clean fclean re