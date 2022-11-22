class Solution {
public:
    
    void helper(TreeNode* root,vector<int> & ans,int level){
        if(root==NULL){
            return;
        }
        //we only have to insert the data which is first from the right side
        //one way of doing this is modified preorder : root,right,left
        //if the level and the size of vector is same it means that it is the first element
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        
        helper(root->right,ans,level+1);
        helper(root->left,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        helper(root,ans,0);
        return ans;
        
    }
};
