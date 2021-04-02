#include<iostream>
using namespace std;
int main(){

 int dis , acc ,time ,ans ;
//dis = distsnce,acc= accleration

 cout<<"the time in which the distance(in feets) travelled by the body has to be calculated ";
 cin>>time;
 cout<<" seconds.";

 acc=32;
 cout<<"by using the formula distance = accleration* time*time/2 . ";
 cout<<"the distance travelled in the given time is ";
 ans=time * time*32;
 cout<<ans/2;
cout<<"feet";
 
	return 0;
}
