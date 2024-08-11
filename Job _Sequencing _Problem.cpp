class Solution 
{
    public:
    // Function to find the maximum profit and the number of jobs done.
    static  bool comp(Job j1,Job j2){
        return j1.dead<j2.dead;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
      int curr=0;
      int point=0;
      priority_queue<int,vector<int>,greater<int>>pq;//learn more about it
      sort(arr,arr+n,comp);
      for(int i=0;i<n;i++){
          if(arr[i].dead>curr){
              point+=arr[i].profit;
              pq.push(arr[i].profit);
              curr++;
          }
          else{
              if(arr[i].profit>pq.top()){
                 point-=pq.top();
                 pq.pop();
                 pq.push(arr[i].profit);
                 point+=arr[i].profit;
              }
          }
      }
      return {curr,point};
    } 
};
