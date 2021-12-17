/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 23:01:35 by yoelguer          #+#    #+#             */
/*   Updated: 2021/12/10 23:01:38 by yoelguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/v1.h"


int	main(int ac, char **av)
{
	t_data all;

	if (ac == 2 )
	{
		ft_check(av[1]);
		ft_pars(&all, av[1]);
	}
	else
		ft_putendl("Usage only one flag with valid equation");
	return (0);
}
