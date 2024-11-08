#include <iostream>
using namespace std;

int step=0;

//(n, from, mid, to)
void hanoi(int n, char A, char B, char C){
    if(n == 1){
        cout << "從 " << A << " 搬到 " << C << '\n';
        step++;
    }
    else{
        hanoi(n-1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n-1, B, A, C);
    }
}
int cc() {
	
    cout << "執行次數：" << step << '\n';
//return 0;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {

	int n;
	cout<<"請輸入塔的環共有幾層：";
	cc();
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    cout << "執行次數：" << step << '\n';
	//	return 0;
}




