Question link : https://www.interviewbit.com/problems/path-to-given-node/

bool helper(TreeNode* root,vector<int>&ans,int B){
    //if we get null return false
    if(!root){
        return false;
    }
    //push the node value into the vector
    ans.push_back(root->val);
    //if the node value equals to B return true
    if(root->val == B){
        return true;
    }
    //if any of the left call or right call is true it means that we have found our target node hence we return true.
    if(helper(root->left,ans,B) || helper(root->right,ans,B)){
        return true;
    }
    //if both left and right call is false it means that path is not correct hence we go one level up again and pop the last node value from the vector and return false.
    ans.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    if(A==NULL){
        return ans;
    }
    
    helper(A,ans,B);
    return ans;
}
