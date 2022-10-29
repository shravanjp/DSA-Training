#include<iostream.h>
using namespace std;
int main(){
    int numOfProducts;
    cin>>numOfProducts;
    vector<int> price(numOfProducts,0);
    vector<int> shippingDist(numOfProducts,0);
    vector<int> sku(numOfProducts,0);

    for(int i=0;i<numOfProducts;i++){
        cin>>price[i];
    }

    for(int i=0;i<numOfProducts;i++){
        cin>>shippingDist[i];
    }

    for(int i=0;i<numOfProducts;i++){
        cin>>sku[i];
    }

    vector<int> res;
    for(int i=0;i<numOfProducts;i++){
        if(sku[i]>0){
            res.push_back(price[i] * shippingDist[i]);
        }
    }

    for(int val : res){
        cout<<val<<" ";
    }
    return 0;
}