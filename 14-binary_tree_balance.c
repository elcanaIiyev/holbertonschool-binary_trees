#include "binary_trees.h"

/**
 * binarty_tree_balance - calculates balance of tree
 * @tree: pointer to the exact node
 * Return: returns balance difference between max height of left and right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);
	height_l = tree ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree ? (int)binary_tree_height(tree->right) : -1;
	return (leight_l - height_r);
}
