#include<stdio.h>
#define username1 1234
#define password1 5678
#define username2 91011
#define password2 121314
#define name1 "omar"
#define name2 "bassel"
int user, pass, i, j, flag;
void main(void)
{
	while (1)
	{
		flag = 0;
		printf("\nnew program \n\n\n");
		for (i = 2; i > 0; i--)
		{
			printf("%s", "enter the username:\n");
			scanf_s("%d", &user);
			if ((user == username1) || (user == username2))
			{
				for (j = 3; j > 0; j--)
				{
					printf("%s", "enter the password:\n");
					scanf_s("%d", &pass);
					if ((user == username1) && (pass == password1))
					{
						printf("hello %s", name1);
						flag++;
						break;
					}
					else if ((user == username2) && (pass == password2))
					{
						printf("hello %s", name2);
						flag++;
						break;
					}
					else
					{
						printf(" you have  %d trials left:\n", j - 1);
						if (j - 1 == 0)
						{
							flag++;
						}
					}
				}
			}
			else
			{
				printf(" you have  %d trials left:\n", i - 1);
				if (i - 1 == 0)
				{
					flag++;
				}
			}
			 if (flag != 0)
			{
				break;
			}
		}

	}
}