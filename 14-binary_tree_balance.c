#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: Noting.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t tree_left = 0, tree_rigth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		tree_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		tree_rigth = 1 + binary_tree_height(tree->right);

	return (tree_left - tree_rigth);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: Noting.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_left = 0, tree_rigth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		tree_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		tree_rigth = 1 + binary_tree_height(tree->right);

	if (tree_left > tree_rigth)
		return (tree_left);

	return (tree_rigth);
}
