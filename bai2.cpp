#include <iostream>
using namespace std;
int main (){
	int a[]={2,3,5,1,7};
	int n = sizeof(a)/sizeof (a[0]);
	int i = 0;
   for (; i < n; i++) 
   {  
    	if (a[i]% 2 == 0) 
	 	{
	 		cout<<"so chan"<<a[i]<<endl;
  	 	}  
     	else 
	 	{
	 		cout<<"so le "<<a[i]<<endl;
   		}
	}
   return 0;
}
