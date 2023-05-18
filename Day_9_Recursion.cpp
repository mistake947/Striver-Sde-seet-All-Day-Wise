//1.........................................................................................................
// Given a list arr of N integers, print sums of all subsets in it.
// 1. find all subset of array
// 2. two methods a) take-not take b)by using bit manuplation
vector<int>ans;
    vector<int>arrr;
    void solve(int i, int sum)
    {
        if(i==arrr.size())  // base condition when we reach end of array it means there is no element left
        {                   // it means push the sum of that subset in ans and retuurn
            ans.push_back(sum);
            return;
        }
        solve(i+1,sum+arrr[i]);  // take currElement in subset
        solve(i+1,sum);       // not take  currElement in subset
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // 1. this method is using bits
        // vector<int>ans;
        // for(int i=0;i<(1<<N);i++)
        // {
        //     int sum=0;
        //     for(int j=0;j<N;j++)
        //     {
        //         if(i&(1<<j))sum+=arr[j];
        //     }
        //     ans.push_back(sum);
        // }
        // return ans;
        
        
        // 2. this method uses take and not take 
        arrr=arr;
        solve(0,0);
        return ans;   
     }

..................................................................................................................................................
//   2
