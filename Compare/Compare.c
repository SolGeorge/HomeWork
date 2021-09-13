#include <stdio.h>

int main()
{
	unsigned int   uint   =  1;
	signed   int   sint   = -1;
	signed   short sshort = -1;
	

	((long)sshort > (long)uint) ? printf("%x>%x\n", sshort, uint) : printf("%x<%x\n", sshort, uint);


	(sint > uint) ? printf("%x>%x", sint, uint) : printf("%x<%x", sint, uint);	
	
	
	return 0;
}
