/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:14:34 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/09 23:49:05 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	j;
	size_t	dest_size;

	dest_size = ft_strlen(dest);
	if (dest_size > size)
		return (ft_strlen((char *)src) + size);
	j = 0;
	while (src[j] && dest_size + 1 < size)
	{
		dest[dest_size] = src[j];
		j++;
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (ft_strlen(dest) + ft_strlen((char *)&src[j]));
}
