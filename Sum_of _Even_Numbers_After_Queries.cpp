class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {

        vector<int> result;


        int s=0;

        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            s=s+A[i];
        }

        for(int i=0;i<queries.size();i++)
        {


        long long int val=queries[i][0];
        long long int index=queries[i][1];


            if(A[index]%2==0)
            {
                s=s-A[index];
            }

            A[index]=A[index]+ val;

            if(A[index]%2==0)
            {
                s=s+A[index];
            }

            result.push_back(s);
        }





        return result;



    }
};
