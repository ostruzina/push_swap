/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:30:12 by verosvec          #+#    #+#             */
/*   Updated: 2026/10/29 20:58:48 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*node_new(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	stack_push_top(t_stack *stack, t_node *node)
{
	if (!stack || !node)
		return ;
	node->next = stack->head;
	stack->head = node;
	stack->size += 1;
}

t_node	*stack_pop_top(t_stack *stack)
{
	t_node	*top_node;

	if (!stack || !stack->head)
		return (NULL);
	top_node = stack->head;
	stack->head = top_node->next;
	top_node->next = NULL;
	stack->size -= 1;
	return (top_node);
}

t_node	*stack_last(t_stack *stack)
{
	t_node	*curr_node;

	if (!stack || !stack->head)
		return (NULL);
	curr_node = stack->head;
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}
	return (curr_node);
}

void	stack_free(t_stack *stack)
{
	t_node	*curr_node;
	t_node	*next_node;

	if (!stack || !stack->head)
		return ;
	curr_node = stack->head;
	while (curr_node)
	{
		next_node = curr_node->next;
		free(curr_node);
		curr_node = next_node;
	}
	stack->head = NULL;
	stack->size = 0;
}
