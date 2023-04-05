int countSpecialNumbers(int N, vector<int> arr) {
        sort(arr.begin(),arr.end());
        int count=0;
        int max=arr[arr.size()-1];
        int arr2[max+1]={0};
        for (auto i:arr){
            arr2[i]+=1;
        }
        for (auto i:arr){
            for(int j=0;j<=max;j++){
                if (arr2[j]!=0){
                    float key=i%j;
                    if (j==i and arr2[j]>1 and key==0){
                        count++;
                        break;
                    }
                    else if (j!=i and key==0){
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
