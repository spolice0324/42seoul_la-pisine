/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_aff_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:19:17 by yesong            #+#    #+#             */
/*   Updated: 2021/03/11 22:28:56 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "a\n", 2);
	return (0);
}
