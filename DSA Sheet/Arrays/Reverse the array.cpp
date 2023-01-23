//link : https://practice.geeksforgeeks.org/problems/reverse-a-string/1

void helper(string &str,int start,int end){
    if(start>end){
        return;
    }
    
    swap(str[start],str[end]);
    start++;
    end--;
    helper(str,start,end);
}

string reverseWord(string str){
    int start = 0;
    int end = str.size()-1;
    helper(str,start,end);
    return str;
    
  //Your code here
}
