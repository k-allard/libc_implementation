/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kallard <kallard@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 22:25:57 by kallard           #+#    #+#             */
/*   Updated: 2020/05/13 22:04:33 by kallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element ’new’ at the end of the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*head;

	if (lst && new)
	{
		head = (*lst);
		if (head == NULL)
			(*lst) = new;
		else
		{
			while (head->next)
				head = head->next;
			head->next = new;
		}
	}
}
