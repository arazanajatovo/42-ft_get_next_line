/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit_line.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 19:49:20 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 13:13:11 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_word_len(char const *s, char c, int i)
{
	size_t	len;

	len = 0;
	while (s[i] != (char const)c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

static char	**ft_count_word(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == (char const)c)
			len++;
		i++;
	}
	if (!(split = (char**)malloc(sizeof(char*) * len + 1)))
		return (NULL);
	i = 0;
	while (i++ <= len)
		split[i] = NULL;
	return (split);
}

char		**ft_strsplit_line(char const *s)
{
	char	**split;
	size_t	i;
	size_t	init_i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (!s || !(split = ft_count_word(s, '\n')))
		return (NULL);
	while (s[i])
	{
		init_i = i;
		len = (size_t)ft_word_len(s, '\n', i);
		i += len;
		if (!(split[j] = ft_strsub(s, init_i, len)))
			return (NULL);
		if (s[i] == '\n')
			i++;
		if (s[i] || (!s[i] && s[i - 1] != '\n'))
			j++;
	}
	return (split);
}
