#include <stdio.h>

int main(){
	char ch;
	//part2: printf("����ʹ��goto"); //part2��һ����ǩ һ�㲻��

	while((ch=getchar()) !='\n')  //  ch=getchar()Ҫ������������
	{
		if(ch == ' ')
		{
			continue;  //continue���ʹ�ý�����һ��ѭ������ѭ���к�������������
		}
		putchar(ch);
	}
	//goto part2;
	//ʹ�����������( ? : )  ����������ʱ��ִ�С������������䣬��������㣬ִ�С�������������
	int a;
	scanf("%d",&a);
	(a > 1 ? a=0:a=2 );
	printf("%d",a);


	return 0;
}