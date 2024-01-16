/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:57:47 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/10 18:43:36 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cpy_src;
	char	*cpy_dest;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	cpy_src = (char *)src;
	cpy_dest = (char *)dest;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (dest);
}
