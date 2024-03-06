class Solution{
    private:
    bool safe(vector<vector<int>> m,vector<vector<int>> visited,int n , int x , int y){
        if((x<n && x>=0) && (y<n && y>=0) && visited[x][y]==0 && m[x][y]==1)
            return true;
        else
            return false;
    }
    void solve(vector<vector<int>> m , vector<vector<int>> visited , vector<string>& ans , int n , int x , int y,string output){
        if(x == n-1 && y == n-1){
            ans.push_back(output);
            return ;
        }
        
        visited[x][y] = 1;
        
        //Down
        int newx = x + 1;
        int newy = y;
        if(safe(m,visited,n,x,y)){
            output.push_back('D');
            solve(m,visited,ans,n,newx,newy,output);
            output.pop_back();
        }
        
        //UP
        newx = x - 1;
        newy = y;
        if(safe(m,visited,n,x,y)){
            output.push_back('U');
            solve(m,visited,ans,n,newx,newy,output);
            output.pop_back();
        }
        
        //Right
        newx = x;
        newy = y + 1;
        if(safe(m,visited,n,x,y)){
            output.push_back('R');
            solve(m,visited,ans,n,newx,newy,output);
            output.pop_back();
        }
        
        //Left
        newx = x;
        newy = y - 1;
        if(safe(m,visited,n,x,y)){
            output.push_back('L');
            solve(m,visited,ans,n,newx,newy,output);
            output.pop_back();
        }
        
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0] == 0)
            return ans;
        string output;
        int x =  0;
        int y = 0;
        vector<vector<int>> visited = m;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                visited[i][j] = 0;
            }
        }
        solve(m,visited,ans,n,x,y,output);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
