#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - This function finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the node siblings or NULL if node has no sibling or parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL)
        return (NULL);
    if (node->parent == NULL)
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);

    if (node->parent->right == node)
        return (node->parent->left);

    return (NULL);
}