/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alix <alix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:03:18 by athiebau          #+#    #+#             */
/*   Updated: 2025/04/18 02:19:23 by alix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push_swap.h"

int	lst_size(t_stack **lst)
{
	t_stack	*node;
	int		count;

	node = *lst;
	count = 0;
	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}

t_stack	*lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		lstlast(*lst)->next = new;
	else
		*lst = new;
}

t_stack	*lstnew(int content)
{
	t_stack	*lst;

	lst = (t_stack *)malloc(sizeof(t_stack));
	if (!lst)
		return (NULL);
	lst->value = content;
	lst->rank = -1;
	lst->next = NULL;
	return (lst);
}
