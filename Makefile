NAME	= push_swap
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
SRCS	= $(shell find src/*.c Libft/*.c)

all : $(NAME)

$(NAME) :
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo OK

re: fclean all

clean:
	@rm -rf $(NAME)

fclean:	clean

norm:
	@norminette $(shell find src/*.c)
	@norminette $(shell find inc/*.h)
	@norminette $(shell find Libft/*.c)

.PHONY:all $(NAME) re clean fclean norm