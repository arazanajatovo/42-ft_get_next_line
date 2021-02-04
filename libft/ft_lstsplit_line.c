/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsplit_line.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 19:48:08 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 13:07:35 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstsplit_line(char const *s)
{
	t_list	*list;
	char	**split;
	int		i;

	i = 0;
	list = NULL;
	if (!s)
		return (NULL);
	if (!(split = ft_strsplit_line(s)))
		return (NULL);
	while (split[i])
	{
		ft_lstaddback(&list, ft_lstnew(split[i], ft_strlen(split[i])));
		i++;
	}
	return (list);
}
