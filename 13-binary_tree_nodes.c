#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left != NULL || tree->right != NULL)
    {
        size_t left_nodes = binary_tree_nodes(tree->left);
        size_t right_nodes = binary_tree_nodes(tree->right);

        return (left_nodes + right_nodes + 1);
    }

    return (0);
}