/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:00:41 by jrobles-          #+#    #+#             */
/*   Updated: 2022/01/31 14:00:43 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str2 == NULL || str2[0] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] == str2[j])
		{
			while (str1[i + j] == str2[j] && i + j < n)
			{
				if (str2[j + 1] == '\0')
					return ((char *)str1 + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}