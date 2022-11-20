vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    //map data structure for storing the levels in ascending order
    map<int,int> mp;
    queue<pair<BinaryTreeNode<int>*,int>> q;
    q.push({root,0});
    
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        //node
        BinaryTreeNode<int>* node = p.first;
        //vertical order of that particular node
        int line = p.second;
        
        
        //map the vertical order to that node value 
        //or if that mapping already exists replace the old mapping with the new as we need the bottom most values
        mp[line] = node->data;
        //if there is left the vertical order decrements
        if(node->left){
            q.push({node->left,line-1});
        }
        //if there is any right the vertical order increments
        if(node->right){
            q.push({node->right,line+1});
        }
    }
    //push the values to the vector
    for(auto p:mp){
        ans.push_back(p.second);
    }
    return ans;
    
}
