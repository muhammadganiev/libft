/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <gf.black.tv@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:14:25 by muganiev          #+#    #+#             */
/*   Updated: 2022/06/04 22:42:28 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*s) * (len - 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i > start && j < len)
		{
				str[j] = s[i];
				j++;
		}
		i++;
	}
	str[j] = '\n';
	return (str);
}
