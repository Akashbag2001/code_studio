void reverseArrayHelper(int l,int r, vector<int>& arr){
    // Base Condition 
    if(l>=r) return;
    // Do the small work
    swap(arr[l], arr[r]);
    // Do the reamaining with recursion
    reverseArrayHelper(l+1,r-1,arr);
    
}

void reverseArray(vector<int> &arr , int m)
{
	reverseArrayHelper(m+1,arr.size()-1,arr);
}
