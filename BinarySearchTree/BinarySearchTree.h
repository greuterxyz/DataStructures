#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <iostream>
#include "TreeNode.h"

using namespace std;

class BinarySearchTree {
	public:
		BinarySearchTree();
		BinarySearchTree(int * arr);
		~BinarySearchTree();
		void insert(int v);
		bool find(int v);
		void remove(int v);
		void print_tree();
		TreeNode * find_parent(int v);
	private:
		TreeNode * root;
		// int height;
		int num_nodes;
		void insert(TreeNode*& node, int v);
		TreeNode * find(TreeNode*& node, int v);
		void remove(TreeNode* node, int v);
		void print_tree(TreeNode*& root);
		TreeNode * find_min(TreeNode* node);
		void replace_node(TreeNode * node1, TreeNode * node2);
		TreeNode * find_parent(TreeNode*& node, TreeNode* parent, int v);
};

#endif