/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:54:35 by tallaire          #+#    #+#             */
/*   Updated: 2020/02/05 21:35:04 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_GET_NEXT_LINE_H
# define DEF_GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(char *str);
int		is_to_c(char *str, int c);
int		ft_error(char **s1, char **s2);
int		end_of_file(char **str);
char	*ft_realloc_stock(char *src);
char	*ft_line(char *src, int *stop);
char	*stock_cat(char *str, char *buff, int *stop);

#endif
