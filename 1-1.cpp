//交换两个实参的值（至少两种正确方法）;
#include <iostream>
using namespace std;

void swap_p(int *a,int *b); 	    // swap_p函数 ，用指针的方法交换实参的值
void swap_r(int &a,int &b); 	    // swap_r函数，用引用的方法交换实参的值
void priab(int a,int b); 	    // priab函数，打印现在ab的值。



void priab(int a,int b){

	cout << "现在 a = " << a << " b = " << b << " " <<  endl;
	
}

void swap_p(int *a,int *b){
	int t;
	t = *a;
	*a = *b;
	*b =t;
}

void swap_r(int &a,int &b){
	int t;
	t = a;
	a = b;
	b = t;
}


int main(){

	int a,b;
	cout << "请输入两个整数值a,b:";
	cin >> a >> b;
	priab(a,b);
	cout << "经过指针方式交换实参后（swap_p）"<< endl;
	swap_p( &a,&b);
	priab(a,b);
	cout << "经过引用方式交换实参后（swap_r）"<< endl;
	swap_r(a,b);
	priab(a,b);
	return 0;

}


	

