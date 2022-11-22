//Question link : https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    
    void helper(TreeNode* left,TreeNode* right){
        
        if(left==NULL || right==NULL){
            return left==right;
        }
        
        if(left->val!=right->val){
            return false;
        }
        
        return helper(left->left,right->right) && helper(left->right,right->left)
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
        helper(root->left,root->right);
        
    }
};
