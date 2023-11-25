class Solution {
public:
    int findpeakindex(vector<int>arr){
        int strt =0;
        int end=arr.size()-1;
        int mid = strt + (end -strt)/2;
        while(strt<end){
            if(arr[mid]<arr[mid+1]){
                strt = mid+1;
            }
            else{
                end = mid;
            }
            mid = strt +(end-strt)/2;
        }
        return strt;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return findpeakindex(arr);
    }
};