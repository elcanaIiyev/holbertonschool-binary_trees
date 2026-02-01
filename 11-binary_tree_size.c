#include "binary_tree.h"

/**
 * binary_tee_size - return size of tree by nodes
 * @tree: pointer to exact node
 * Return: returns size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size = tree->left ? 1 + binary_tree_size(tree->left) : 0;
		size = tree->right ? 1 + binary_tree_size(tree->right) : 0;
		return (size);
	}
	return (0);
}
