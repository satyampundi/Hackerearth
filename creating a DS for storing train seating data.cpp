#include<iostream>
#include<string>
using namespace std;
struct type{
  char ts,tp;
};
class train{
    int stno;
    char a,b;
    public:
    void start(int stno){
            this->stno=stno;
        }
        void bing(int n){

        type d[12]={{'W','S'},{'M','S'},{'A','S'},{'A','S'},{'M','S'},{'W','S'},{'W','S'},{'M','S'},{'A','S'},{'A','S'},{'M','S'},{'W','S'}};
        a=d[n-1].ts;  b=d[n-1].tp;
        }
        void show(){
        cout<<"the data stored:"<<stno<<" "<<a<<b<<endl;
        }
};
int main(){
  int i,n;
  train *p=new train[108];
  train *d=p;
  train *q=p;
  train *foo=p;
  //type d[6]={{'W','S'},{'M','S'},{'A','S'},{'A','S'},{'M','S'},{'W','S'}};
  for(i=0;i<108;i++)
  {//input initilise seat number
   p->start(i+1);
   p++;

  }
  n=0;
  while(n<9){
  for(i=0;i<12;i++)
  {//input initilise seat type
   q->bing(i+1);
   q++;
  }
  n++;
  }
  for(i=0;i<108;i++)
  {
   cout<<"the value is: "<<endl;
   d->show();
   d++;
  }
  delete []foo;

    return 0;
}
