/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 23:58:44 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/20 23:17:46 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = tmp;
		tmp = new;
		i++;
	}
	return (new);
}
