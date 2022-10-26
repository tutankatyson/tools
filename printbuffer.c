/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbuffer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:31:47 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/26 20:34:18 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"	

void printbuff(char *str, char *name)
{
	size_t i = 0;
	char c = '\n';
	char *c3 = "$\\n$";
	char c2 = '|';

	write(1,&c,1);
	while (name[i] != '\0')
	{
		write(1,&name[i],1);
		i++;
	}
	write(1,":",1);

	write(1,&c2,1);
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
		{
			write(1,c3,4);
		}
		else
			write(1,&str[i],1);
		write(1,&c2,1);
		i++;
	}
	write(1,"$\\0$|",5);
//	printf("prueba(%zu)",i);
}
