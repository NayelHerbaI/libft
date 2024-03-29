/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:04:33 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/17 16:17:14 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlcat(char *dest, char const *src, size_t size);
size_t	ft_strlcpy(char *dest, char const *src, size_t size);
int		ft_atoi(char const *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int nbr);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, void *src, unsigned int n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(char *src);
char	*ft_strchr(const char *s, char c);
char	*ft_strrchr(const char *s, char c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *ss, int c, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	*ft_calloc(size_t nelem, size_t elsize);
char	*ft_strcpy(char *dest, char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
