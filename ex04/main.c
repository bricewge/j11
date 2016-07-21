/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 23:05:42 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/19 23:31:41 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);

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
	int		i;
	int		length;
	t_list	*list;

	i = 0;
	length = 10;
	list = NULL;
	while (i < length)
	{
	    ft_list_push_front(&list, &i);
		i++;
	}
	/* list = ft_create_elem("tralala\n"); */
	/* list = NULL; */
	/* ft_list_push_front(&list, "trololol\n"); */

	list = ft_list_last(list);
	printf("%s", list->data);
}
