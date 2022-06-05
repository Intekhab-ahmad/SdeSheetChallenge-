class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=matrix[0].size();
        int row=matrix.size();
        int r[row],c[col];
        
        for(int i=0;i<row;i++)
            r[i]=0;
        
        for(int i=0;i<col;i++)
            c[i]=0;
        
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    r[i]=-1;
                    c[j]=-1;
                    }
                }
            }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
              if(r[i]==-1 || c[j]==-1)
                  matrix[i][j]=0;
        }
        }
        
    }
};