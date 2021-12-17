/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 00:24:05 by yoelguer          #+#    #+#             */
/*   Updated: 2019/03/30 15:54:40 by yoelguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	j;

	str = (char *)b;
	j = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = j;
		i++;
	}
	return (b);
}
