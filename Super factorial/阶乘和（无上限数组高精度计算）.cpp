#include <stdio.h>
/*
用高精度计算出 S=1!+2!+3!+.....+n!（n≤50）。
其中 ! 表示阶乘，定义为 n!=n×(n-1)×(n-2)×...×1。例如，5!=5×4×3×2×1=120。
输入格式
一个正整数 n。
输出格式
一个正整数 S，表示计算结果
*/
int main(){

	int N=0;
	scanf("%d",&N);
	int f[N+1][100];             //前一个表示是几的阶乘，后一个每一个元素表示一位上的数字，0是个位 
	for(int i=0;i<=N;i++){
		for(int j=0;j<100;j++){
			f[i][j] = 0;
		}
	}
	f[1][0]=1;
	int flen[N+1];               //记录对应阶乘的数字长度 
	flen[1] = 1;
	
	
	
	
	//1.先处理i!        算法为i！==（i-1）！*i;	
	for(int i=2;i<N+1;i++){
		int len = flen[i-1];
		int carry=0;                  //处理进位
		
		for(int j=0;j<len;j++){
			int temp = f[i-1][j]*i + carry;
			f[i][j] = temp%10;
			carry = temp/10;
		}                             //全部处理完了开始处理还剩的进位
		
		while(carry!=0){
			f[i][len++] = carry%10;
			carry /= 10;
		}
		
		flen[i] = len;
			
	}
	//2.处理阶乘和,思路为每一次相加我都存在后一个数组里，重复进行这个故事
	
	for(int i=1;i<N;i++){
		int carry=0;
		int len=flen[i+1];
		
		for(int j=0;j<flen[i+1];j++){       //依旧处理第i位 
			int temp=f[i][j]+f[i+1][j]+carry;
			f[i+1][j] = temp%10;
			carry = temp/10;
		}
		
		while(carry!=0){
			f[i+1][len++] = carry%10;
			carry /= 10;
		}
		
		flen[i+1] = len;
		
	} 
	for(int j=flen[N]-1;j>=0;j--){
		printf("%d",f[N][j]);
	}
	printf("\n");
			
}
