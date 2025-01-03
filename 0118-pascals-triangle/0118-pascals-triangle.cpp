class Solution {
public:
 vector<int> generateRow(int row)
     {
     long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int i=1;i<row;i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> temp = generateRow(i);
            v.push_back(temp);
        }
        return v;
    }
};