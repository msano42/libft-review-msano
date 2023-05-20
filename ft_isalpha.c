/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:27:01 by aenshin           #+#    #+#             */
/*   Updated: 2023/05/21 00:28:46 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	isalpha(int c) {
	if (c >= (int) 'A' && c <= (int) 'Z')
	{
		return (1);
	}
	return (0);
}
