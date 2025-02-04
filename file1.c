#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("/home/harshavardhan/file.c","r");
	if(fptr==NULL)
	{
		perror("fopen");
	}

}
