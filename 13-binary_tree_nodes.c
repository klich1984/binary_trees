#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: return
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);

	size_left = binary_tree_nodes(tree->left);
	size_right = binary_tree_nodes(tree->right);
	return (size_left + size_right + 1);
}
