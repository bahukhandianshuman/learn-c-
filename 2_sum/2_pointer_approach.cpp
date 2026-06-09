//in 2 pointer first we sort the array
for(int i=0;i<n-1;i++){
  for(int j=i+1;j<n;j++){
    if(arr[i]>arr[j]){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
}
while(start<end){
  if(arr[start]+arr[end]==target){
    return {start,end};
  }
  if(arr[start]+arr[end]>target)
  end--;
  else start++;

}