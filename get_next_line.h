/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 15:48:59 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 13:02:56 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 50

# include "libft/includes/libft.h"
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

int		get_next_line(int const fd, char **line);

#endif
