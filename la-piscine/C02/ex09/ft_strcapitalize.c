/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukwon <eukwon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:59:00 by eukwon            #+#    #+#             */
/*   Updated: 2022/01/18 20:08:03 by eukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		else
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] += 32;
		}
		i++;
	}
	return (str);
}