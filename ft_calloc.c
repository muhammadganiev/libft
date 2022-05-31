/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <gf.black.tv@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:20:25 by muganiev          #+#    #+#             */
/*   Updated: 2022/05/30 20:20:26 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = NULL;
	if (!(ptr = malloc(count * size)))
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
