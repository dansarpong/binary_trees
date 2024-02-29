#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node to insert the left-child in
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	else
		new->left = NULL;
	parent->left = new;
	new->right = NULL;

	return (new);
}
