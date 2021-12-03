#include <stdio.h>

void main(){
	/*注释内容可以是单行*/

	/*
	第一行
	第二行
	可以是多行
	*/
	
	int x /*注释*/ = 1;
	printf("x = %d\n",x);
	
	//可以单独一行
	int y = 1;//也可以在语句的行尾
	printf("y = %d\n",y);
	
	printf("//单行注释 /*多行注释*/");
	
	int age = 10;
	
	//printf("\n%d",ag/*error*/e);//这行会报错因为注解会编译为空格
}