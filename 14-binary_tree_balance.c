#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor, 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree->left ? (int)binary_tree_height(tree->left) : 0;
	right = tree->right ? (int)binary_tree_height(tree->right) : 0;
	return (left - right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 * Return: height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 1;
	size_t right = 1;

	if (!tree)
		return (0);

	left += tree->left ? binary_tree_height(tree->left) : 0;
	right += tree->right ? binary_tree_height(tree->right) : 0;
	return (left > right ? left : right);
}
