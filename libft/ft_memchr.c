/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:00:23 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/03 17:42:27 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	a;

	str = (unsigned char *) s;
	a = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
