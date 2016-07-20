/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 23:29:30 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/20 23:39:57 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*next_in_list;

	while (*begin_list)
	{
		next_in_list = *begin_list;
		begin_list = &next_in_list->next;
		free(*begin_list);
	}
}
