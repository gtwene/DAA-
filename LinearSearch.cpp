#include<iostream>
using namespace std;

int fnLinSearch(int A[], int B, int C){
	
	int i;
	for(i=0; i<B; i++)
		if(A[i]==C)
		return i;
	return -1;
}

int main(void){
	
	int A[20];
	int B;
	int C;
	
cout<<"Enter the size of the array"<< endl;
cin>>B;

cout<<"Enter your Values"<<endl;
for(int i =0; i<B; i++)
cin>>A[i];

cout<<"Enter the number you want to find it index"<<endl;
cin>>C;

int result = fnLinSearch(A, B, C);
	if(result == -1)
		cout<<"Element not found"<<endl;
	
	else
		cout<<"Element found at position" << result;
		
	
	return 0;
}
