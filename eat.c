#include <stdio.h>

int   hungry(char*str)
{
	char eunsun;
	char kyungwon;
    eunsun = str[0];
	kyungwon = str[1];
	char *eat[3] = {"let's eat!" , "eat alone", "see you!"};
	if( eunsun == '1' && kyungwon  == '1')
	{   
 		printf("%s\n",eat[0]);
    	return (0);
	}
	else if ( eunsun == '0' &&kyungwon == '0')
	{   
   		printf("%s\n",eat[2]);
    	return (0);
	}
	else
	{   
   		printf("%s\n",eat[1]);
    	return (0);
	}
}
​
int main(int argc, char **num)
{
    hungry(num[1]);
    return (0);
}
​
​
