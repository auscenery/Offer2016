/************************************************************************/
/*
����
Lily�Ͽ�ʱʹ����ĸ����ͼƬ��С������ѧϰӢ�ﵥ�ʣ�ÿ�ζ���Ҫ����ЩͼƬ���մ�С
��ASCII��ֵ��С���������պá����Ҹ�Lily��æ��ͨ��C���Խ����

֪ʶ��	�ַ���
����ʱ������	0M
�ڴ�����	0
����
Lilyʹ�õ�ͼƬ����"A"��"Z"��"a"��"z"��"0"��"9"��������ĸ�����ָ���������1024��

���
Lily������ͼƬ���մ�С�����˳�����

��������	Ihave1nose2hands10fingers
�������	0112Iaadeeefghhinnnorsssv
*/
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*���������ַ�����������1024����ʼ����1025*/
	char str[1025];
	int i, j, len;
	char c;

	/*�ӿ���̨����*/
	gets_s(str);
	len = strlen(str);

	/*����ASCII��ֵ�����ַ�����������*/
	for (i = 1; i<len; ++i)
	{
		c = str[i];
		j = i - 1; 
		while (j >= 0 && str[j] > c)
		{		
			str[j + 1] = str[j];
			--j;
		}//while
		str[j + 1] = c;
	}//for
	printf("%s\n", str);
	system("pause");
}