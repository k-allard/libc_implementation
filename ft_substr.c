/* ************************************************************************** */
/*                 															  */
/*   			By: kallard <kallard@student.21-school.ru>        			  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Dynamically allocates and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (char *)(ft_calloc(1, sizeof(char)));
	if ((i - start) < len)
		len = i - start;
	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
