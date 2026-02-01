#include "binary_tree.h"

/**
 * _pow - helper function for power operation
 * @base: base of power
 * @exp: the  exponent
 *
 * Return: the result of base^exp
 */

int _pow(int base, int exp)
{
	int res = 1;

	if (exp < 0)
		return (0);

	while (exp > 0)
	{
		res *= base;
		exp--;
	}
	return (res);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_size(tree) == _pow(2, binary_tree_height(tree) - 1))
		return (1);
}

/**
 * binary_tree_height - returns height of tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_size - return size of tree by nodes
 * @tree: pointer to exact node
 * Return: returns size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (0);
}
