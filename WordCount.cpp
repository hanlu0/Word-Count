#include<stdio.h>
int main()
{
    int letter_number = 0;//��ĸ���� 
	int space_number = 0;//�ո����
    int tab_number = 0;//�Ʊ������ 
    int enter_number = 0;//���з�����
    int character_number =0;//���ַ�����
    char c;
    int count=1,i;//��ʼ�������ַ��������ʵ���С
    printf("������Ӣ���ı����ݣ�\n");
    while((c = getchar()) != EOF)
    {
    	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
		   ++letter_number;
	    }
        if(c == ' ')
        {
            ++space_number;
            ++count;
        }
        if(c==',')
        {
        	++count;
		}
        if(c == '\t')
        {
            ++tab_number;
        }
        if(c == '\n')
        {
            ++enter_number;
        }
    }
    character_number=letter_number+space_number+tab_number+enter_number ;
    printf("�ַ�����%d\n",character_number);
    printf("��������%d\n",count);
    return 0;
}


