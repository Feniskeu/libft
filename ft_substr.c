/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:52:00 by fboivin           #+#    #+#             */
/*   Updated: 2023/01/20 22:27:18 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0 || start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	i = 0;
	if (start < ft_strlen(s))
		while (s[start + i] && i < len)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
		i = 0;
	while (s[start] && i < len)
	{
		if (i <= len)
		{
			ptr[i++] = s[start++];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
