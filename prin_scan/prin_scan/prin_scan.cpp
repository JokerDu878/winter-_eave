#include <stdio.h>
#define  PAGES 522

int main(){

	//1.printf()  ����ֵΪ����ַ��ĸ���  ���������᷵��һ������
	float cash = -120.3;

	printf("*%010d*\n" ,PAGES);
	printf("*%10d*\n",PAGES);
	printf("*%f*\n",cash);//
	printf("*%+f*\n",cash); //��Ҫ�ǿ��԰����Ŵ�ӡ����

	//ʹ��"\"��Enter ���б�д���У��������е�ʱ�򲻻ỻ�У��ҵڶ���Ҫ����д��Ȼ���пո�
	printf("this is a test \
use '\\' to get next raw\
 and its works\n");


	//2.scanf()��ʽ�ַ��� ����ֵΪ�ɹ���ȡ������  û�л���д��Ҫ��ƥ�䷵��0   
	int n,m;
	scanf("%d,%d",&n,&m);//�����ʱ���������ֱ�����','����

	printf("%d,%d",n,m);


	//3.��*��������printf() ͨ������ָ������ֶο�� �� printf("%*d",width, num)����width�Ǹ�*��ֵ��width��һ����������num�Ǹ�d
	//4.'*'����scanf()  ��������  
	int k;
	printf("enter three integers:");
	scanf("%*d,%*d,%d",&k); //��'*'���ε�������������
	printf("the last integer was %d\n",k);



	return 0;
}