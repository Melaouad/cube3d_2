/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 01:03:19 by melaouad          #+#    #+#             */
/*   Updated: 2020/11/25 03:08:38 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

#include <stdio.h>
#include "get_next_line.h"
# include <fcntl.h>
#include "libft.h"

typedef struct s_env 
{
  int save;
    /* data */
} t_env;
    t_env g_e;

char **ft_filehandler(char *filename);
int ft_fileexist (char *path);
int		ft_compare(char *s1, char *s2);
char **ft_tabnew(void);
int ft_checkext(char *ext);
int		ft_compare(char *s1, char *s2);

char **ft_readfile (int fd);
int     ft_checkext(char *ext);

#endif
