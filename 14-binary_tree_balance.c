#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: Noting.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int tree_left = 0, tree_rigth = 0, fe = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		tree_left = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		tree_rigth = 1 + binary_tree_balance(tree->right);

	fe = tree_left - tree_rigth;

	return (fe);
}
