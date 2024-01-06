#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height;
    size_t level;
    size_t nodes;

    if (tree == NULL)
        return (0);

    height = binary_tree_height(tree);
    level = 0;
    nodes = 0;

    while (level <= height)
    {
        nodes += (1 << level);
        level++;
    }

    return (nodes == binary_tree_size(tree));
}