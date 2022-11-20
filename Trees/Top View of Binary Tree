vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    
    vector<int> ans;
    
    //map data structure to store the result
    map<int,int> mp;
    if(root==NULL){
        return ans;
    }
    
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root,0});
    
    while(!q.empty()){
        //take the front element
        auto p = q.front();
        q.pop();
        //node
        TreeNode<int> *node = p.first;
        //vertical order of the node
        int line = p.second;
        
        //check if that vertical order is already present 
        //i.e we only have to take the elements which are at the top of the vertical order 
        if(mp.find(line) == mp.end()){
            mp[line] = node->val;
        }
        //if we go left vertical order decrements
        if(node->left){
            q.push({node->left,line-1});
        }
        //if we go right the vertical order increments
        if(node->right){
            q.push({node->right,line+1});
        }
        
        
    }
    //add the elements to the vector
    for(auto p : mp){
        ans.push_back(p.second);
    }
    
    return ans;
}
