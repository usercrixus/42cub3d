/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_shoot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaisne <achaisne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:13:35 by mcogne--          #+#    #+#             */
/*   Updated: 2025/02/03 19:40:43 by achaisne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// INSERT ICI FT QUI RENVOIE 1 (ID DU MOB) SI LE TIR A TOUCHE ENNEMY
// POUR QUE JE METTE A JOUR LE MOB MORT

static short	action_shot(t_env *env, t_map *map)
{
	t_pos	pos;

	if (map->player.bullets > 0)
	{
		pos = is_sprites_shot(map, env->textures);
		if (pos.x != 0 && pos.y != 0)
		{
			map->sprites_size--;
			map->grid[pos.y][pos.x] = CARAC_BOT_BLOOD;
		}
		map->player.bullets--;
	}
	else
		ft_printf(MINT_GREEN NAME "No bullet in your weapon !\n");
	return (0);
}

void	handler_action_weapon(t_env *env)
{
	if (env->event->click_left)
	{
		action_shot(env, env->map);
	}
}
