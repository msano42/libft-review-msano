/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:15:55 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/06 21:42:57 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int
	ft_strncmp(const char *s1, const char *s2, size_t n) {
	size_t	i;

	i = 1;
	while (*s1 != '\0' && *s2 != '\0' && i <= n)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		i++;
	}
	if (i > n || *s1 == *s2)
		return (0);
	if (*s1 == '\0')
		return (-42);
	return (42);
}
