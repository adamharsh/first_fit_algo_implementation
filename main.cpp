//this is program to implement next fit algorithm this is made using dev cpp ide so pls run it on that or make required changes.
//made by:harsh goyal rollno:27
//class:cse a 5th sem.
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int block_size,process_size;
	cout<<"Enter the no of blocks:";
	cin>>block_size;
	cout<<"\nEnter the no of process:";
	cin>>process_size;
	int blocksize[block_size],pro_size[process_size];
	for(int i=0;i<block_size;i++){
		cout<<"\nEnter the "<<i+1<<" block size:";
		cin>>blocksize[i];
	}
	for(int i=0;i<process_size;i++){
		cout<<"\nEnter the "<<i+1<<" process size:";
		cin>>pro_size[i];
	}
	cout<<"\nProcess size\tBlock size(block no)";
	for(int j=0;j<process_size;j++){
		cout<<"\n"<<pro_size[j];
		for(int k=0;k<block_size;k++){
			if(pro_size[j]<blocksize[k]){
				cout<<"\t\t"<<blocksize[k]<<"("<<k+1<<")";
				blocksize[k]-=pro_size[j];
				break;
			}
		}
	}
	return 0;
}
