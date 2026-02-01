#include "binary_trees.h"

/**
 * binary_tree_leaves - checks count of the parent nodes in binary tree
 * @tree: pointer to the exact node
 * Return: returns count of the parent nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left || tree->right)
			return (1);
		return (binary_tree_nodes(tree->left) + binary_tree_nodess(tree->right));
	}
	return (0);
}
