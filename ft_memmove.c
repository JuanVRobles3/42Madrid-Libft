/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:15:39 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/02 19:54:25 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	unsigned char   *d;
	unsigned char   *s;
	size_t          i;
	
	if (!str1 && !str2) 
		return (NULL);
		
	d = (unsigned char*)str1;
	s = (unsigned char*)str2;
	
	if (str1 <= str2)  
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}   
	}
	else 
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}   
	}
	return (str1);
}