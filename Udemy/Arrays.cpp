/*         
            int function(vector<int> A){    
                
                //Similar to for x in A.
                //Eg -
                for(int &x : A){
                    x*=2;
                }
            
                //Hack : Hidden testcases.
                for(int x : A){
                    cout << x;
                }
            
                return -1;
            
            }     
*/

//SubArraySum
/*
    #include <bits/stdc++.h>
    using namespace std;
    int subArraySum(int arr[],int n){
        int max=0,sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=i;k<j;k++){
                    sum+=arr[k];
                }
                if(sum>max) max=sum;
                sum=0;
            }
        }
        return max;
    }
    int main(){
        int arr[]={1,2,3,-12,4,5,-11};
        int n=sizeof(arr)/sizeof(arr[0]);
        cout << subArraySum(arr,n);
    }

    #include <bits/stdc++.h>
    using namespace std;
    int subArraySum(int arr[],int n){
        int max=0,sum=0;
        int preSum[n];
        preSum[0]=arr[0];
        for(int i=1;i<n;i++){
            preSum[i]=preSum[i-1]+arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum=preSum[j]-preSum[i-1];
                if(sum>max) max=sum;
            }
        }
        return max;
    }
    int main(){
        int arr[]={1,2,3,-12,4,5,-11};
        int n=sizeof(arr)/sizeof(arr[0]);
        cout << subArraySum(arr,n);
    }

//Kadane's Algorithm
    #include <bits/stdc++.h>
    using namespace std;
    int subArraySum(int arr[],int n){
        int max=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>max)max=sum;
            if(sum<0) sum=0;
        }
        return max;
    }
    int main(){
        int arr[]={1,2,3,-12,4,5,-11};
        int n=sizeof(arr)/sizeof(arr[0]);
        cout << subArraySum(arr,n);
    }
*/