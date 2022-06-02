/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <gf.black.tv@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:12 by muganiev          #+#    #+#             */
/*   Updated: 2022/06/02 20:49:43 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);
{
	if (!alst || !new)
		return (NULL);
	next->next = *alst;
	*alst = new;
}
