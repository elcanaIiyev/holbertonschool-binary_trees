#include "binary_trees.h"

/**
 * binary_tree_node - adds new node to tree
 * @parent: pointer to parent of tree
 * @value: value of new node
 * Return: returns new added node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*parent));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
