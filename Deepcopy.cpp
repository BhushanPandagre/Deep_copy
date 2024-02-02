//DEEP COPY......????
#include<iostream>
using namespace std;

class deepcopy
{
  int cr,pw;
  int *p;
  public:deepcopy()
  {
    p=new int;
  }
  deepcopy(deepcopy &d)
  {
    cr=d.cr;
    pw=d.pw;
    p=new int;
    *p=*(d.p);
  }
  ~deepcopy()
  {
    cout<<"memory relesed "<<endl;
    delete p;
  }
  public:void atm(int crd,int pwd,int bankid)
  {
    cr=crd;
    pw=pwd;
    *p=bankid;
  }
  void show()
  {
    cout<<"card:"<<cr<<endl;
    cout<<"password:"<<pw<<endl;
    cout<<"bank id:"<<*p+90<<endl;
  }
};
int main()
{
    deepcopy d1;
    d1.atm(102,2023,1001);
    deepcopy d2=d1;
    d2.show();
    deepcopy d4=d1;
    d4.show();
    return 0;
}

