/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbredykh <dbredykh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:07:34 by dbredykh          #+#    #+#             */
/*   Updated: 2023/09/10 18:56:57 by dbredykh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	add_to_stack(int i, char **values, t_list **stack_a)
{
	t_list	*temp;
	int		current_value;

	current_value = ft_atoi(values[i]);
	temp = ft_lstnew(current_value);
	if (!temp)
		return (0);
	if (!*stack_a)
		ft_lstadd_front(stack_a, temp);
	else
		ft_lstadd_back(stack_a, temp);
	return (1);
}

t_list	**ft_create_stack(char **values, t_list **stack_a)
{
	int	i;

	i = 0;
	stack_a = ft_calloc(1, sizeof(t_list *));
	if (!stack_a)
		return (NULL);
	while (values[i])
	{
		if (!add_to_stack(i, values, stack_a))
			return (NULL);
		i++;
	}
	return (stack_a);
}
