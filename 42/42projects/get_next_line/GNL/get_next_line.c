/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuse <hmatsuse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 23:20:18 by syamashi          #+#    #+#             */
/*   Updated: 2020/07/10 20:24:10 by hmatsuse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		esc(char **s, int fd, int flag)
{
	int	i;

	if (flag == -1)
	{
		i = -1;
		while (++i < 256)
		{
			if (s[i])
			{
				free(s[i]);
				s[i] = NULL;
			}
		}
	}
	if (flag == 0 && s[fd])
	{
		free(s[fd]);
		s[fd] = NULL;
	}
	return (flag);
}

static	int		end_n(char *move, char **line, char **sfd, char *buf)
{
	*move = '\0';
	if (!(*line = ft_strjoin(*sfd, buf)))
	{
		free(buf);
		buf = NULL;
		return (-1);
	}
	free(*sfd);
	if (!(*sfd = ft_strdup(++move)))
	{
		free(buf);
		buf = NULL;
		return (-1);
	}
	free(buf);
	buf = NULL;
	return (1);
}

static	int		end_nl(char **line, char **sfd, char *buf)
{
	if (!(*line = ft_strjoin(*sfd, buf)))
	{
		free(buf);
		buf = NULL;
		return (-1);
	}
	free(buf);
	buf = NULL;
	return (0);
}

static	int		read_fd(int fd, char **line, char **s)
{
	int		endr;
	char	*move;
	char	*buf;

	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (esc(s, fd, -1));
	while ((endr = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		if (!s[fd] && !(s[fd] = ft_strdup("")))
			return (esc(s, fd, -1));
		buf[endr] = '\0';
		if ((move = ft_strchr(buf, '\n')))
			return (end_n(move, line, &s[fd], buf) == -1 ? esc(s, fd, -1) : 1);
		if (endr < BUFFER_SIZE)
			return (end_nl(line, &s[fd], buf) ? esc(s, fd, -1) : esc(s, fd, 0));
		if (!(move = ft_strjoin(s[fd], buf)))
			return (esc(s, fd, -1));
		free(s[fd]);
		s[fd] = move;
	}
	free(buf);
	buf = NULL;
	if (endr < 0 || !(*line = ft_strdup(s[fd])))
		return (esc(s, fd, -1));
	return (esc(s, fd, 0));
}

int				get_next_line(int fd, char **line)
{
	static char	*s[256];
	char		*move;
	char		*tmp;

	if (fd < 0 || fd > 255 || !line || BUFFER_SIZE <= 0)
		return (esc(s, fd, -1));
	if (s[fd])
	{
		if ((move = ft_strchr(s[fd], '\n')))
		{
			*move = '\0';
			if (!(*line = ft_strdup(s[fd])))
				return (esc(s, fd, -1));
			if (!(tmp = ft_strdup(++move)))
				return (esc(s, fd, -1));
			free(s[fd]);
			s[fd] = tmp;
			return (1);
		}
	}
	return (read_fd(fd, line, s));
}
