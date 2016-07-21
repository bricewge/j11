/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:33:09 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/20 23:15:31 by bwaegene         ###   ########.fr       */
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
//		printf("%s", "test\n");
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(int argc, char **argv)
{
	ft_print_list(ft_list_push_params(argc, argv));
	return (0);
}
