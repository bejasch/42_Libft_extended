/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:11:31 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/22 12:13:04 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	char	match;

	match = (char)c;
	while (*string)
	{
		if (*string == match)
			return ((char *)string);
		string++;
	}
	if (!match)
		return ((char *)string);
	return (0);
}
