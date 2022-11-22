Question Link : https://leetcode.com/problems/binary-tree-paths/

class Solution {
public:
    //we are not using & operator with curr because we need seperate curr for each step i.e for each leaf node the curr string will be different
    void helper(TreeNode* root,vector<string>& ans,string curr){
        if(root==NULL){
            return;
        }
        //if the node is not a lead node then add the value of the node to the string and also a -> sign
        if(root->left || root->right){
            curr += (to_string(root->val) + "->");
        }
        //if the node is a leaf node then we will just add the value of the node to the string
        //and the push it into the string vector
        else{
            curr += (to_string(root->val));
            ans.push_back(curr);
        }
        
        
        helper(root->left,ans,curr);
        helper(root->right,ans,curr);
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string curr = "";
        helper(root,ans,curr);
        return ans;
    }
};
