#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the current node is root
 * @node: current node
 * Return: returns 1 if the node is root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
