vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        
        int left {0};
        int right {0};
        
        int current_sum {0};
        
        while(right < n){
            
            
            current_sum += arr[right];
            
            if(current_sum > s){
                left++;
                right = left;
                current_sum = 0;
                continue;
            }
            
            
            
            if(current_sum == s){
                return {left+1, right+1};
            }
            
            right++;
        }
        
        return {-1};
    }
