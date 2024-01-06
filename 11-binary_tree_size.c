#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - This function measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t n;

    if (tree == NULL)
        return (0);
    n = 1;
    n += binary_tree_size(tree->left);
    n += binary_tree_size(tree->right);

    return (n);
}