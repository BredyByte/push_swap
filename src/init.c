/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbredykh <dbredykh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:10:08 by marvin            #+#    #+#             */
/*   Updated: 2023/08/28 14:31:10 by dbredykh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*values;
	int	res;
	int	len;

	values = malloc(sizeof(int) * argc - 1);
	res = 0;
	if (!values)
		return (1);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		len = ft_dstrlen(argv);
		res = ft_arg_check(len, argv, values);
	}
	else
		res = ft_arg_check(argc - 1, argv + 1, values);
	if (!res)
	{
		ft_print_error();
		free(values);
		return (1);
	}
	return (0);
}
