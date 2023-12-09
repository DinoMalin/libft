/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:19:23 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:25:50 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* IS */
int		ft_isdigit(int ch);
int		ft_isalpha(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);

/* MEM */
void	*ft_memset(void *pointer, int value, size_t size);
void	ft_bzero(void *pointer, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t size);
void	*ft_memchr(const void *ptr, int search, size_t size);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void	*ft_calloc(size_t count, size_t size);

/* STR */
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
char	*ft_strchr(char *str, int search);
char	*ft_strrchr(char *str, int search);
int		ft_strncmp(char *s1, char *s2, size_t size);
char	*ft_strnstr(char *str, char *search, size_t size);
int		ft_atoi(const char *str);
char	*ft_strdup(char *str);
char	*ft_substr(char const *src, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *str, char const *set);
char	**ft_split(char const *str, char c);
char	*ft_itoa(int nb);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
void	ft_striteri(char *str, void (*f)(unsigned int, char *));

/* PUT */
void	ft_putchar_fd(char ch, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);

/* LST */
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));;
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif