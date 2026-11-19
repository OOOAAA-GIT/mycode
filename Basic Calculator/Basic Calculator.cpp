#include<stdio.h>
#include<math.h>
void menu(){
    printf("1.求和\n"
           "2.求差\n"
           "3.求积\n"
           "4.求商\n"
           "5.平方\n"
           "6.开方\n"
           "0.退出\n"
           "请输入你的选择：");
}

int add(int n,int m){
    return n+m;
}

int sub(int n,int m){
    return n-m;
}

int mul(int n,int m){
    return n*m;
}

int div(int n,int m){
    return n/m;
}

int square(int n){
    return n*n;
}

double sqrt(int n){
    return sqrt(n);
}

int main(){
    menu();
    int choice=0;
    scanf("%d", &choice);
    
    while(choice<0 || choice>6){
        printf("输入错误，请重新输入：");
        scanf("%d", &choice);
    }
	
	int n, m;
	
	if(choice!=0){
		printf("请输入两个整数：");   	
    	scanf("%d %d", &n, &m);
	}

    switch(choice){
        case 1:
            printf("结果是：%d\n", add(n, m));
            break;
        case 2:
            printf("结果是：%d\n", sub(n, m));
            break;
        case 3:
            printf("结果是：%d\n", mul(n, m));
            break;
        case 4:
            printf("结果是：%d\n", div(n, m));
            break;
        case 5:
            printf("结果是：%d\n", square(n));
            break;
        case 6:
            printf("结果是：%.2f\n", sqrt(n));
            break;
    }
    return 0;
}
