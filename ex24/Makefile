NAME = libft.a
SRC_DIR = srcs
CC = cc
CFLAGS = -Wall -Wextra -Werror
INC_DIR = includes

SRC =	$(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_putstr.c	\
	$(SRC_DIR)/ft_strcmp.c	\
	$(SRC_DIR)/ft_strlen.c	\
	$(SRC_DIR)/ft_swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
