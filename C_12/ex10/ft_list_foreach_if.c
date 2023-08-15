/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:30:34 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/14 17:42:49 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (!cmp(begin_list->data, data_ref))
			f(begin_list->data);
		begin_list = begin_list->next;
	}
}

// #include <stdio.h>

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*component;

// 	component = (t_list *)malloc(sizeof(t_list));
// 	if (!component)
// 		return (component);
// 	component->data = data;
// 	component->next = NULL;
// 	return (component);
// }

// void ft_list_push_front(t_list **begin_list, void *data)
// {
// 	t_list	*el ;

// 	el = ft_create_elem(data);
// 	el->next = *begin_list;
// 	*begin_list = el;
// }

// t_list	*ft_list_push_strs(int size, char **strs)
// {
// 	t_list	*begin_list;
// 	int	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		ft_list_push_front(&begin_list, strs[i]);
// 		i++;
// 	}
// 	return (begin_list);
// }

// int ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s1 == *s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*s1 - *s2);
// }

// void ft_printf(void *el)
// {
// 	printf("%s", (char *)el);
// }

// int main(int argc, char *argv[])
// {
// 	t_list	*el1 = ft_list_push_strs(argc, argv);
// 	// ft_print_list(el1);
// 	ft_list_foreach_if(el1, &ft_printf, "4", &ft_strcmp);
// 	return 0;
// }
