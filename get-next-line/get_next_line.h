/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukwon <eukwon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:26:02 by eukwon            #+#    #+#             */
/*   Updated: 2022/04/17 16:37:47 by eukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list{
	int				fd;
	char			*backup;
	struct s_list	*next;
}	t_list;
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_lstadd_back(t_list **lst, t_list *new);
char	*ft_strdup(const char *s1);
int		check_fd(int fd, t_list *fd_lst);
t_list	*check_init(int fd, t_list *fd_lst);
int		ft_read_buff(int fd, t_list *lst_ptr);
char	*ft_get_line(int fd, t_list *fd_lst);
char	*get_next_line(int fd);

#endif