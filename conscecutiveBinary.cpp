#include<iostream>
using namespace std;

int findLength(string binaryStr,int start,int end){
    int mxLength = 1;
    int tempCount = 0;
    for(int i=start;i<=end;i++){
        if(binaryStr[i] == binaryStr[i+1]){
            tempCount++;
            continue;
        }
         if((tempCount+1) > mxLength){
            mxLength = tempCount+1;
            tempCount=0;
        }  
    }
    return mxLength;
}

int main(){
    int len;
    cin>>len;
    string binaryStr;
    cin>>binaryStr;

    int start=0,end=len-1;
    for(int i=1;i<len;i++){
        if(binaryStr[i]==binaryStr[0]){
            continue;
        }
        start=i;
        break;
    }

    for(int j=len-1;j>=0;j--){
        if(binaryStr[j]==binaryStr[len-1]){
            continue;
        }
        end=j;
        break;
    }
    cout<<findLength(binaryStr,start,end);
    return 0;
}