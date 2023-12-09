/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:15:57 by jcario            #+#    #+#             */
/*   Updated: 2023/12/08 21:22:59 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < size && s1[i] && s2[i])
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
