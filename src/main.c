/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:03:47 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/11/02 19:03:50 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<so_long.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		check_argument(argv[1]);
	//si el mapa es incorrecto
	/*if (check_map() != 0)
		printf("ERROR\n");
	else
		printf("GOOD\n");*/
}
