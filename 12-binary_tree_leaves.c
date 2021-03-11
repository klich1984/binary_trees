#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: return
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_left = binary_tree_leaves(tree->left);
	size_right = binary_tree_leaves(tree->right);
	return (size_left + size_right);
}
