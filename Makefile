CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

FILES =	ft_isdigit ft_isalnum ft_isalpha ft_isascii ft_isprint \
		ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_calloc \
		ft_strlen ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_atoi \
		ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

BONUS_F = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

OBJS_BONUS = $(addsuffix .o, $(BONUS_F))

.PHONY = all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	@echo "✔ Compilation des fichiers sources"
	@ar -rcs $(NAME) $(OBJS)
	@echo "✔ Bibliothèque créee"

$(OBJ_DIR)%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJS_BONUS)
	@echo "✔ Suppression des fichiers sources"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

bonus: $(OBJS_BONUS)
	@echo "✔ Compilation des fichiers bonus"
	@ar -rcs $(NAME) $(OBJS_BONUS)
