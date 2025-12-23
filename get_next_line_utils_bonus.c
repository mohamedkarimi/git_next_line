/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokarimi <mokarimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:23:25 by mokarimi          #+#    #+#             */
/*   Updated: 2025/11/13 13:28:56 by mokarimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fullstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	fullstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!fullstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		fullstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		fullstr[i + j] = s2[j];
		j++;
	}
	fullstr[i + j] = '\0';
	return (fullstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	alloc_len;
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		alloc_len = ft_strlen(s) - start;
	else
		alloc_len = len;
	sub = malloc(alloc_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < alloc_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	ptr = (char *)malloc(len_s + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
