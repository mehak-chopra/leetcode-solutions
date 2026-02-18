/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        //base case
        if (root == nullptr) return 0;
        
        //low - skip left subtree
        if (root->val < low) 
            return rangeSumBST(root->right, low, high);
        
        //high - skip right subtree
        if (root->val > high) 
            return rangeSumBST(root->left, low, high);
        
        //node val within the range - check both subtrees
        return root->val 
               + rangeSumBST(root->left, low, high) 
               + rangeSumBST(root->right, low, high);
    }
};


