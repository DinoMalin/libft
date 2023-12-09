CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

OBJ_DIR = obj/

FILES =	ft_isdigit ft_isalnum ft_isalpha ft_isascii ft_isprint \
		ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_calloc \
		ft_strlen ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_atoi \
		ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
		ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))

.PHONY = all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: all
