/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kallard <kallard@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:53:08 by kallard           #+#    #+#             */
/*   Updated: 2020/05/17 16:21:36 by kallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies up to dstsize - 1 characters from the string src --> to dest,
** NUL-terminates the result.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t i;

	i = 0;
	if (!dest)
		return (0);
	if (destsize > 0)
	{
		while (src[i] && i < destsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
