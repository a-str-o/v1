/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 07:17:33 by yoelguer          #+#    #+#             */
/*   Updated: 2019/04/22 07:19:35 by yoelguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *lst)
{
	while (lst)
	{
		ft_putstr(lst->content);
		if (lst->next != NULL)
			ft_putstr("  --->  ");
		lst = lst->next;
	}
}
