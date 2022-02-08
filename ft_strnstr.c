/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:00:41 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/03 15:13:25 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strnstr() function locates the first occurrence of the null-terminated 
*	string needle in the string haystack, where not more than len characters are 
*	searched.  Characters that appear after a `\0' character are not searched.
*	PARAMETERS
*	#1. The string in which to check for the occurence of the substring.
*	#2. The substring to check the occurence of.
*	#3. The number of bytes to check in haystack.
*	RETURN VALUES
*	If needle is an empty string, haystack is returned; if needle occurs nowhere 
*	in haystack, NULL is returned; otherwise a pointer to the first character of 
*	the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	c;

	if (str2[0] == '\0')
		return ((char *)str1);
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		c = 0;
		while ((str1[i + c] == str2[c]) && (i + c) < n)
		{
			if (str2[c + 1] == '\0')
				return ((char *)(&str1[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
