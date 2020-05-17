/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kallard <kallard@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 12:26:53 by kallard           #+#    #+#             */
/*   Updated: 2020/05/17 15:10:56 by kallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the last occurrence of char c in the string str.
*/

char	*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == c)
			return (char *)(str + len);
		len--;
	}
	return (0);
}
