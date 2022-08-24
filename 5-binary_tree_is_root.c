#include "binary_trees.h"
/**
t - checks if a given node is root
 *@node: node t *binary_tree_is_rooo check
 *Return: 1 - node, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
