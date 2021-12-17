
NAME = v1

SRC  =	main.c\
		checker.c\

HEADER = 	includes/v1.h

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CFLAGS = -Wall -Wextra -Werror 

OBJ_DIR = ./obj

LIBFT_DIR = ./libft

LIBFT_LIB = $(LIBFT_DIR)/libft.a

CC = @gcc 

SRC_DIR = ./srcs

all : $(NAME)

$(LIBFT_LIB): force
	@make -C $(LIBFT_DIR)

force:

$(NAME) : $(LIBFT_LIB) $(OBJ)
	@gcc $(OBJ) $(CFLAGS) -o $(NAME)  $(LIBFT_LIB)
	@echo "\033[92mDone for v1\033[0m"

$(OBJ_DIR):
	@-mkdir $(OBJ_DIR)

$(OBJ): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADER) | $(OBJ_DIR)
	@gcc -c  $< -o $@ 

clean :
	@make clean -C ./libft/
	@rm -rf $(OBJ_DIR)

fclean : clean
	@make fclean -C ./libft/
	@rm -rf $(NAME)

norme:
	@norminette **/*.c
	@norminette **/*.h

re : fclean all
