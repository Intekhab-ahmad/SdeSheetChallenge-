class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=matrix[0].size();
        int row=matrix.size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<col;k++){
                        matrix[i][k]=-1;
                        matrix[k][j]=-1;
                    }
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==-1)
                    matrix[i][j]=0;
            }
        }
        
    }
};