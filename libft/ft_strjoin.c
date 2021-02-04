/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 22:00:54 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 13:11:24 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*new_s;

	if (!(s1) || !(s2))
		return (NULL);
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	if (!(new_s = ft_strnew(len + 1)))
		return (NULL);
	i = 0;
	len = 0;
	new_s = ft_strcpy(new_s, s1);
	new_s = ft_strcat(new_s, s2);
	return (new_s);
}
