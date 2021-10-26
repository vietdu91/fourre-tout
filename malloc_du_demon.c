/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_du_demon.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:58:21 by emtran            #+#    #+#             */
/*   Updated: 2021/10/26 17:22:47 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_truc
{
	unsigned long int	*tab[20000];
	int			i;
}	truc;

//Fonction qui malloc
void	*malloc_your_mum(size_t size, struct *truc)
{
	void *machin;

	machin = malloc(size);
	if (!machin)
		return (NULL);

	// Dans struct, il doit y avoir un tab en unsigned long int
	// Dans struct, il doit y avoir un int i (compteur)
	
	truc->tab[truc->i++] = machin;
	return (machin);
}

//Fonction qui free pointeur

void	free_my_pointeur(struct *truc, void *machin)
{
	if (machin)
		free(machin);
}


//Fonction qui free tout 

void	free_all_my_tetons(struct *truc)
{
	while (truc->i >= 0)
	{
		if (truc->tab[truc->i])
			free (truc->tab[truc->i]);
		truc->i--;
	}
}
