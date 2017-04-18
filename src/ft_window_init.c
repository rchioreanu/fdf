/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <rchiorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:56:27 by rchiorea          #+#    #+#             */
/*   Updated: 2017/04/18 12:22:42 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	ft_window_init(t_data *data, char *ar)
{
	data->name = ar;
	data->deg = 0.52398776;
	data->color = COLO;
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, WIDTH, HEIGHT, data->name);
	data->space = (WIDTH) / (data->cols + data->zoom);
}
