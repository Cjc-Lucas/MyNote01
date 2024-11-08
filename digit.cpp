#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for (int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=5;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	for (int i=1;i<=5;i++){
		for(int j=5;j>=1&&j>=i;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	int z=19;
	for (int i=1;i<=z;i++){
		int y=0;
		for(int j=1;j<=z*2-1;j++){
			//int x = (j>z?j-z:z-j);
			if ((j>z?j-z:z-j)<i){
				y++;
				(y>10? cout<<y : cout<<" "<<y );
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}	
	
		
	return 0;
}
