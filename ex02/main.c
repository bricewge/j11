/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:33:09 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/19 18:43:13 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list	*begin_chain;

	begin_chain = ft_create_elem("tralala\n");
//	begin_chain = NULL;
	ft_list_push_front(&begin_chain, "trololol\n");
	ft_print_list(begin_chain);
	return (0);
}
