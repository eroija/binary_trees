#include "binary_trees.h"
/**
 * bst_search - A function that searches for a value in a Binary Search Tree.
 * @tree: A pointer to the root node of the BST to search.
 * @value: The value to search for in the BST.
 * Return: If the tree is NULL or the value is not found, NULL.
 * Otherwise, a pointer to the node containing a value equals to value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
