/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Cre4ated: 2016/07/19 18:50:07 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/19 20:30:09 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		ft_list_size(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);

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

	printf("%d", ft_list_size(list));
//	printf("%d", ft_list_size(NULL));
}
