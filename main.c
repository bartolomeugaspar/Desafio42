/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajoao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 00:11:37 by bajoao            #+#    #+#             */
/*   Updated: 2025/09/19 01:45:47 by bajoao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ft_tolower(char *s) {
    for (int i = 0; s[i]; i++)
        s[i] = tolower(s[i]);
}

void rem_ispunct(char *str) {
    for (int i = 0; str[i]; i++) {
        if (ispunct(str[i]))
            str[i] = ' ';
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Número de argumentos inválido\n");
        return 1;
    }

   
    char buffer[1000];
    strncpy(buffer, argv[1], sizeof(buffer));
    buffer[sizeof(buffer) - 1] = '\0';

    ft_tolower(buffer);
    rem_ispunct(buffer);

  
    char *token = strtok(buffer, " \t\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " \t\n");
    }

    return 0;
}

