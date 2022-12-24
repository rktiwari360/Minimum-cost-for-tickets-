class Solution {
public:
int answer(int i,int n,vector<int>&days,vector<int>&costs,vector<int>&arr){
if(i>=n)
return 0;
if(arr[i]!=-1)
return arr[i];
int x =  costs[0]+answer(i+1,n,days,costs,arr);
 int j;
 for( j =i; j<n && days[j] < days[i]+7;j++);
     int y = costs[1]+answer(j,n,days,costs,arr);
     for( j =i;j<n && days[j]<days[i]+30;j++);
      int z = costs[2]+answer(j,n,days,costs,arr);
      arr[i] = min(x,min(y,z));
      return arr[i];


}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int>arr(n+1,-1);
     return   answer(0,n,days,costs,arr);

    }
};
