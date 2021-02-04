/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isalnum.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 16:12:26 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 13:04:52 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_isalnum(int c)
{
	if (!(c >= 'a' && c <= 'z')
			&& !(c >= 'A' && c <= 'Z')
			&& !(c >= '0' && c <= '9'))
		return (0);
	return (1);
}