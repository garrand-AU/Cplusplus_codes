class Solution {
    // treat the problem as a tree, depth first search in the tree
    void dfs(int left, int right, string &curr, vector<string> &res ){
        // end of left and right condition
        if(left == 0 && right == 0){
            res.push_back(curr);
            return;
        }
        // left bracket is more than right bracket
        if (left > right){

            return;
        }
        // recurrsive
        if(left > 0){
            curr += "(";
            dfs(left -1, right, curr, res);
            // cout << curr;
            // reduce last character "("
            curr.pop_back();
            // cout << "\n";
            // cout << curr;
            // cout << "\n";
        }
        if(right > 0){
            curr += ")";
            dfs(left, right -1, curr, res);
            curr.pop_back();

        }

    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr = "";
        dfs(n,n, curr, res);
        return res;

    }
};
