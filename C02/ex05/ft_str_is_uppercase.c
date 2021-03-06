/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:57:37 by yesong            #+#    #+#             */
/*   Updated: 2021/03/01 16:05:25 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	char a;

	i = 0;
	while(str[i] != '\0')
	{
		a = str[i];
		if(!(a >= 'A' && a <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
