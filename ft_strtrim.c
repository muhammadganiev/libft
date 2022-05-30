/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <gf.black.tv@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:14:22 by muganiev          #+#    #+#             */
/*   Updated: 2022/05/30 20:13:29 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (0);
		return (1);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_set(s1(start), set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		if (!(rtn = ft_strdup("")))
			return (NULL);
		else
			return (dest);
	}
	while (is_set(s1[end - 1], set) == 0)
		end--;
	dest = ft_substr(s1, start, end - start);
	return (dest);
}
