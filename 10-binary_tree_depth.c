#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: depth of binary tree, 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
