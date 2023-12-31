/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbredykh <dbredykh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:00:25 by dbredykh          #+#    #+#             */
/*   Updated: 2023/08/31 18:45:18 by dbredykh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!len)
		return (ft_strlen(src, 'c'));
	while (src[++i] && i < (len - 1))
		dest[i] = src[i];
	dest[i] = '\0';
	return (ft_strlen(src, 'c'));
}
