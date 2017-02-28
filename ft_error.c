/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <rchiorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:55:53 by rchiorea          #+#    #+#             */
/*   Updated: 2017/02/28 15:55:54 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_error(int err, char *str)
{
	if (err == 1)
	{
		write(1, str, ft_strlen(str));
		return (0);
	}
	else if (err == 2)
	{
		write(1, str, ft_strlen(str));
		exit(0);
	}
	return (0);
}
