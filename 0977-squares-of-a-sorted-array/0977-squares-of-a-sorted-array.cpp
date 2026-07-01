class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {   
        int k=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<k;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);

            }
            else{
                pos.push_back(nums[i]);
            }
        }
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];
            }
                return pos;
        }
        else if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];

            }
                reverse(neg.begin(),neg.end());
                return neg;
        }
        int i=0,j=0;
        int n=neg.size();
        int m=pos.size();
        vector<int> ans;
        while(i<n){
            neg[i]=neg[i]*neg[i];
            i++;

        }
            reverse(neg.begin(),neg.end());
        while(j<m){
            pos[j]=pos[j]*pos[j];
            j++;

        }
        i = 0;
        j = 0;
        while(i<n && j<m){
            if(neg[i]<pos[j]){
                ans.push_back(neg[i++]);
              
            }
            else{
                ans.push_back(pos[j++]);

            }
        }
        while(i<n){
            ans.push_back(neg[i++]);
        }
        while(j<m){
            ans.push_back(pos[j++]);
        }
        return ans;





    }


};