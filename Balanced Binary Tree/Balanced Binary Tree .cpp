/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int flag = true;
    bool isBalanced(TreeNode *root) {
        height(root);
        return flag;
    }
    
    int height(TreeNode *root)
    {
        if(root == NULL)
            return 0;
            
        int left = height(root->left) + 1;
        int right = height(root->right) + 1;
        
        if(abs(left-right) >1)
            flag = false;
        
        return left>right ? left: right;
    }
};