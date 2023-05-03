#include<stdio.h>
int main()
{
    int letter_number = 0;//字母个数 
	int space_number = 0;//空格个数
    int tab_number = 0;//制表符个数 
    int enter_number = 0;//换行符个数
    int character_number =0;//总字符个数
    char c;
    int count=1,i;//初始化容纳字符的数组适当大小
    printf("请输入英文文本内容：\n");
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
    printf("字符数：%d\n",character_number);
    printf("单词数：%d\n",count);
    return 0;
}


