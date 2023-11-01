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
   vector<int>ans;
int mx_freq=0;
unordered_map<int,int>mp;
void dfs(TreeNode* root){
    if(root==NULL) return;
    int f= mp[root->val]++;
    if(f>mx_freq) 
    {mx_freq=f;
    ans={root->val};
    }
    else if(f==mx_freq) ans.push_back(root->val);
    dfs(root->left);
    dfs(root->right);
}
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return ans;
    }
};