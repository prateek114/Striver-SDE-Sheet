vector<vector<int>> generate(int numRows) {
    vector<vector<int>>ans;
    
    for(int i=0;i<numRows;i++){
        vector<int>ds(i+1);
        ds[0]=ds[i]=1;
        
        for(int j=1;j<ds.size()-1;j++){
            ds[j]=ans[i-1][j-1]+ans[i-1][j];
        }
        ans.push_back(ds);
    }
    
    return ans;
}