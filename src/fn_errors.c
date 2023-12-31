/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbredykh <dbredykh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:20:34 by dbredykh          #+#    #+#             */
/*   Updated: 2023/09/06 11:49:47 by dbredykh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_memory_error(t_list **stack_a, t_list **stack_b)
{
	size_t	error;

	error = 0;
	if (!stack_a)
		error = 1;
	if (!stack_b)
	{
		ft_lstclear(stack_a);
		error = 1;
	}
	if (error == 1)
		write(2, "Memmory Error\n", 6);
	return (error);
}

void	ft_arg_error(void)
{
	ft_printf("Arguments Error!!\n");
	exit(1);
}
