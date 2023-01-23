//problem link: https://leetcode.com/problems/binary-tree-right-side-view/description/


//Explaination : Here we have to get the right side view of the binary tree . Which means that we have to select the first node from right side from every element.
// Here the first thought is to use level order traversal but it's time complexity will be greater.
// So we will use recursive traversal.Reverse Pre order i.e. Root Right Left



class Solution {
public:

    void helper(TreeNode* root,int level,vector<int>& res){
        if(root==NULL){
            return;
        }
      
      // So how will we identify that this is the first element in the level from the right side?
      //We will use a trick by making a vector
      //If the size of the vector is same as the level it means that this is the first element of the level and we will add it to the vector.

        if(level == res.size()){
            res.push_back(root->val);
        }

        helper(root->right,level+1,res);
        helper(root->left,level+1,res);


    }
    vector<int> rightSideView(TreeNode* root) { 
        vector<int> res;
        helper(root,0,res);
        return res;
        
    }
};
