/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:00:54 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/03 16:00:55 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *p;
    size_t strlen;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    strlen = ft_strlen(s1);
    p = (char *) malloc (strlen * sizeof(char));

}