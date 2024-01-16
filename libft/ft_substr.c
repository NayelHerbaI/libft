/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:45:17 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/12 17:51:15 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	s_len;

	s_len = (unsigned int)ft_strlen((char *)s);
	if (start >= s_len)
	{
		sub = malloc(sizeof(char));
		sub[0] = '\0';
		return (sub);
	}
	sub = malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
