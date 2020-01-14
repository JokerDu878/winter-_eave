#include <stdio.h>
#define  PAGES 522

int main(){

	//1.printf()  返回值为输出字符的个数  若输出错误会返回一个负数
	float cash = -120.3;

	printf("*%010d*\n" ,PAGES);
	printf("*%10d*\n",PAGES);
	printf("*%f*\n",cash);//
	printf("*%+f*\n",cash); //主要是可以把正号打印出来

	//使用"\"加Enter 进行编写换行，程序运行的时候不会换行，且第二行要顶格写不然会有空格。
	printf("this is a test \
use '\\' to get next raw\
 and its works\n");


	//2.scanf()格式字符串 返回值为成功读取的项数  没有或者写入要求不匹配返回0   
	int n,m;
	scanf("%d,%d",&n,&m);//输入的时候两个数字必须以','隔开

	printf("%d,%d",n,m);


	//3.‘*’来修饰printf() 通常用来指定输出字段宽度 如 printf("%*d",width, num)这里width是给*赋值，width是一个变量，而num是给d
	//4.'*'修饰scanf()  跳过输入  
	int k;
	printf("enter three integers:");
	scanf("%*d,%*d,%d",&k); //有'*'修饰的跳过，不输入
	printf("the last integer was %d\n",k);



	return 0;
}