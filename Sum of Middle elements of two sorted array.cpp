class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        
        vector<int>arr3;
        int i=0;
        int j=0;
        while(i<arr1.size()&&j<arr2.size()){
           if(arr1[i]<=arr2[j]){
               
               arr3.push_back(arr1[i]);
               i++;
           }
           else{
               
               arr3.push_back(arr2[j]);
               j++;
           }
         
           
           }
           
           while(i<arr1.size()){
               arr3.push_back(arr1[i]);
               i++;
           }
           while(j<arr2.size()){
               arr3.push_back(arr2[j]);
               
               j++;
           }
           
           int mid=arr3.size()/2;
              mid=mid-1;
         
           return  arr3[mid]+arr3[mid+1];
        }
    
}
