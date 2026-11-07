/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuozhan <shuozhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:24:08 by shuozhan          #+#    #+#             */
/*   Updated: 2026/11/07 17:59:08 by shuozhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	emit(t_operation op, t_context *ctx)
{
	char	*op_names[11];

	op_names[1] = "sb\n";
	op_names[2] = "ss\n";
	op_names[3] = "pa\n";
	op_names[4] = "pb\n";
	op_names[5] = "ra\n";
	op_names[6] = "rb\n";
	op_names[7] = "rr\n";
	op_names[8] = "rra\n";
	op_names[9] = "rrb\n";
	op_names[10] = "rrr\n";
	write (1, op_names[op], ft_strlen(op_names[op]));
	ctx->stats.total++;
	ctx->stats.ops[op]++;
}
