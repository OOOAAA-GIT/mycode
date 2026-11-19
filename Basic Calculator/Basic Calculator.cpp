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

double my_sqrt(int n){
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
	
	if(choice!=0&&choice<5){
		printf("请输入两个整数：");   	
    	scanf("%d %d", &n, &m);
	}
	
	if(choice!=0&&choice>=5){
		printf("请输入整数：");   	
    	scanf("%d", &n);
	}

    switch(choice){
        case 1:
            printf("%d+%d = %d\n", n,m,add(n, m));
            break;
        case 2:
            printf("%d-%d= %d\n", n,m,sub(n, m));
            break;
        case 3:
            printf("%d*%d= %d\n", n,m,mul(n, m));
            break;
        case 4:
            printf("%d/%d= %d\n", n,m,div(n, m));
            break;
        case 5:
            printf("%d的平方为 %d\n",n, square(n));
            break;
        case 6:
            printf("%d的开方为%.2f\n", n,sqrt(n));
            break;
    }
    return 0;
}
