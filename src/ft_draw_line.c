/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <rchiorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:55:41 by rchiorea          #+#    #+#             */
/*   Updated: 2017/04/18 12:22:21 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	ft_draw_line(t_data *data, t_coord p1, t_coord p2, int color)
{
	int x;
	int y;

	x = abs(p2.x - p1.x);
	y = abs(p2.y - p1.y);
	data->sx = (p1.x < p2.x) ? 1 : -1;
	data->sy = (p1.y < p2.y) ? 1 : -1;
	data->counter = (x > y) ? (x / 2) : -(y / 2);
	while (1)
	{
		mlx_pixel_put(data->mlx, data->win, p1.x, p1.y, color);
		if (p1.x == p2.x && p1.y == p2.y)
			break ;
		data->e = data->counter;
		if (data->e > -x)
		{
			data->counter = data->counter - y;
			p1.x = p1.x + data->sx;
		}
		if (data->e < y)
		{
			data->counter = data->counter + x;
			p1.y = p1.y + data->sy;
		}
	}
}
