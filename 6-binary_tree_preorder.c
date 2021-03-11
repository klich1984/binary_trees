#include "binary_trees.h"
/**
 * binary_tree_preorder - hat goes through a binary tree using pre-order
 * binary tree using pre-order traversal.
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func: is a pointer to the function that print.
 * Return: Nothing.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
