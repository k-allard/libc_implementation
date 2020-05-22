/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kallard <kallard@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 22:32:20 by kallard           #+#    #+#             */
/*   Updated: 2020/05/22 16:16:49 by kallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element ’new’ at the beginning of the list.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)    	//If the new node is empty,
		return ;	//return control.
	if (!*lst)		//If the pointer to the head of the list points to zero,
	{
		*lst = new; 	//write a new node there
		return ;		//and return control.
	}
	new->next = *lst;   //In all other cases: set the 'next' of the new node to point to the start of the list,
	*lst = new;			//and change the head pointer to point to the new node.
}
