void swap_max(int l[], int len, int n){
  int a=l[n];
  int max_index;
  //printf("the value of n is %i\n",n);
    for(int i=n; i<len; i++){
      if(a<=l[i]){
        a=l[i];
        //printf("%i\n",a);
        max_index=i;
        //printf("max-index %i\n", max_index);
      }     
    }

  /*swap*/
  int k=l[max_index];
  //printf("value of k is %i\n",k);
  l[max_index]=l[n];
  l[n]=k;
 } 

void ssort(int arr[], int len){
  for(int i=0; i<len; i++){
    swap_max(arr,len,i);
  }  
}     
