///Bubble Sort

void bubble(vector<int>&arr){

    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
            }
        }
    }

}

void selction(vector<int>&arr){
      for(int i =0;i<n;i++){
        int mini = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini =j;
            }
        }
        swap(arr[mini],arr[i]);
      }
}

void insertion(vector<int>&arr){
    for(int i =1;i<n;i++){
       int key = arr[i];
       int j =i-1;
       while(j>=0 && arr[j]>key){
          arr[j+1]=arr[j];
          j--;
       }
       arr[j+1]=key;
    }
}