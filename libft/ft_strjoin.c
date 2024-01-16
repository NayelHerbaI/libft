/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:12:31 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/05 16:53:05 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*str1;
	int		len;
	int		i;

	i = 0;
	str1 = (char *) s1;
	len = ft_strlen(str1) + ft_strlen((char *)s2);
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	ft_strcpy(res, str1);
	ft_strcat(res, (char *)s2);
	return (res);
}
