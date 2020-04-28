#include<stdio.h>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int  sizeofarray=5;
	int a[sizeofarray];
	cout<<"Enter elements:";
	
	int i=0;
	while(i<=4){
		cin>> a[i];
		cout<<"\n";
		i++;
	}

	
	int *p=&a[0];
	cout<<"You entered: ";
	for(int i=0; i<sizeofarray; i++){
		
		cout<< *p<< "\n \n";
		p++;
	}

return 0;
}
	
