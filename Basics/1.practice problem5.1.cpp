#include<iostream>
using namespace std;
int main(){

int len, wid, ar, cir;
//len=length, wid=width, ar=area, cir=circumference 
cout<<"There is rectangular feild whose length is ";
cin>>len;

cout<<"feet and width is ";
cin>>wid;

ar=len*wid;
cout<<"feet.It's area is ";
cout<<ar;

cir=2*len +2*wid;;
cout<<"square feet and the circumference is ";
cout<<cir;
cout<<"feet.";


return 0;
}
