/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajoao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 00:11:37 by bajoao            #+#    #+#             */
/*   Updated: 2025/09/19 01:33:18 by bajoao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>
void	ft_tolower(char *s)
{
	for (int i = 0; s[i]; i++)
		s[i] = tolower(s[i]);
}
void	rem_ispunct(char * str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (ispunct(str[i]))
			str[i] = ' ';
	}
}

int main(int argc, char **argv)
{
	if (argc < 1)
		printf ("numero de arqumento invalido");
	//char	*word;
//	int	i = 0;
///	printf ("Digite a palavra");
//	scanf ("%s", argv[1]);
	while (argv[1])
	{
		ft_tolower(argv[1]);
		rem_ispunct(argv[1]);
		strtok(argv[1], " \t\n");
	}
	printf ("%s", argv[1]);
}
