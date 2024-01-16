/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:39:29 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/04 22:20:32 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_trim(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

int	count_loc(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (check_trim(set, s1[i]) == 0)
	{
		count++;
		i++;
	}
	if (count == ft_strlen((char *)s1))
		return (0);
	i = ft_strlen((char *)s1) - 1;
	while (check_trim(set, s1[i]) == 0)
	{
		count++;
		i--;
	}
	return (ft_strlen((char *)s1) - count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	int		i;
	int		n;
	int		j;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	n = 0;
	trimed = malloc(sizeof(char) * count_loc(s1, set) + 1);
	if (trimed == NULL)
		return (NULL);
	while (check_trim(set, s1[i]) == 0)
		i++;
	while (check_trim(set, s1[j]) == 0)
		j--;
	j++;
	while (i < j)
	{
		trimed[n] = s1[i];
		i++;
		n++;
	}
	trimed[n] = '\0';
	return (trimed);
}
