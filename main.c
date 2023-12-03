/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:18:16 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/03 22:32:04 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"

# include <fcntl.h>
# include <stdio.h>

int main()
{
	int fd1 = open(".testTxt/test.txt",O_RDONLY);
	printf("%s",get_next_line(fd1));
	return (0);
}
