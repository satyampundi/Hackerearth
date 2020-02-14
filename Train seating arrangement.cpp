#include<iostream>
using namespace std;
int main(){
    int test,seatnum,n=1;
    cin>>test>>seatnum;
    n=seatnum%12;
    while(test!=0){
        switch(n){
            case 0 : n-=11;  
                           printf("%d WS\n",n);  
                           break;  
                case 1 : n+=11;  
                           printf("%d WS\n",n);  
                           break;  
                case 2 : n+=9;  
                           printf("%d MS\n",n);  
                           break;  
                case 3 : n+=7;  
                           printf("%d AS\n",n);  
                           break;  
                case 4 : n+=5;  
                           printf("%d AS\n",n);  
                           break;  
                case 5 : n+=3;  
                           printf("%d MS\n",n);  
                           break;  
             case 6 : n+=1;  
                           printf("%d WS\n",n);  
                           break;  
                case 7 : n-=1;  
                           printf("%d WS\n",n);  
                           break;  
                case 8 : n-=3;  
                           printf("%d MS\n",n);  
                           break;  
                case 9 : n-=5;  
                           printf("%d AS\n",n);  
                           break;  
             case 10 : n-=7;  
                           printf("%d AS\n",n);  
                           break;  
             case 11 : n-=9;  
                           printf("%d MS\n",n);  
                           break;        
                       }
        test--;
    }
    return 0;
}
