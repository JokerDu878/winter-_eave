#include <stdio.h>

int main(){
	char ch;
	//part2: printf("测试使用goto"); //part2是一个标签 一般不用

	while((ch=getchar()) !='\n')  //  ch=getchar()要用括号括起来
	{
		if(ch == ' ')
		{
			continue;  //continue语句使得进入下一个循环，本循环中后面的语句跳过。
		}
		putchar(ch);
	}
	//goto part2;
	//使用条件运算符( ? : )  当满足条件时，执行‘？’后面的语句，如果不满足，执行‘：’后面的语句
	int a;
	scanf("%d",&a);
	(a > 1 ? a=0:a=2 );
	printf("%d",a);


	return 0;
}