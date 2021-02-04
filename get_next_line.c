/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 15:48:38 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 13:41:41 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strncat_all(char *dst, char *src, unsigned int n)
{
	char	*buf;
	char	*dst2;
	char	*str;

	if (!dst)
		return (ft_strncat_all("", src, n));
	if (!src)
		return (ft_strncat_all(src, dst, n));
	dst2 = dst;
	while (*dst2)
		dst2++;
	if (!(str = (char*)malloc(sizeof(char) * (dst2 - dst) + n + 1)))
		return (str);
	buf = str;
	while (*dst)
		*buf++ = *dst++;
	while (n--)
		*buf++ = *src++;
	*buf = '\0';
	return (str);
}

int			get_next_line(int const fd, char **line)
{
	static t_list	*list;
	char			*buf;
	char			*str;
	int				bfs;

	bfs = BUFF_SIZE;
	str = NULL;
	if (fd < 0 || !line)
		return (-1);
	if (!(buf = (char*)malloc(sizeof(char) * bfs + 1)))
		return (-1);
	while ((bfs = read(fd, buf, BUFF_SIZE)) > 0)
		if (!(str = ft_strncat_all(str, buf, bfs)))
			return (-1);
	if (str)
		if (!(list = ft_lstsplit_line(str)))
			return (-1);
	if (bfs <= 0 && !list && !*line)
		return (-1);
	if (!list)
		return (0);
	*line = (char*)list->content;
	list = list->next;
	return (1);
}
