/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:39:28 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/19 18:44:23 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*list_first;
	t_list		*new;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		list_first = *begin_list;
		new = ft_create_elem(data);
		new->next = list_first;
		*begin_list = new;
	}
}
