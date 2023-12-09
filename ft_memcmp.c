/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:10:36 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:14:35 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*p1, const void	*p2, size_t len)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)(p1 + i) == *(unsigned char *)(p2 + i) && i < len)
		i++;
	if (i == len)
		return (0);
	return (*(unsigned char *)(p1 + i) - *(unsigned char *)(p2 + i));
}
