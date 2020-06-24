/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuse <hmatsuse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:20:58 by hmatsuse          #+#    #+#             */
/*   Updated: 2020/06/24 16:52:54 by hmatsuse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	register char *dest = dst;
	register const char *ssrc = src;
	const char ch = c;

	while (n-- > 0)
	{
		*dest++ = *ssrc++;
		if (*ssrc == ch)
			return(dst);
	}
	return(NULL);
}

// int		main(void)
// {
// 	char buf[] = "ABCDEFGHIJ";
// 	char buf2[] = "123456789";

// 	ft_memccpy(buf, buf2, 'k', 7);
// 	printf("copied buf = %s\n", buf);

// 	return (0);
// }
