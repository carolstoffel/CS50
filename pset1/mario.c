// Let’s recreate that pyramid in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramid itself 
// is also be taller than it is wide.

//       #
//      ##
//     ###
//    ####
//   #####
//  ######
// #######
//########


#include <cs50.h>
#include <stdio.h>


int get_width(void);


int main(void)
{
    int width = get_width();
    for(int i = 0; i < width; i++)
    {
	    for (int j = 0; j < width; j++)
    	{
    	    if (i+j < width-1) {
         		printf(" ");
    	} else{
    	    printf("#");
    	}
    	}
    	printf("\n");
    }
}


int get_width(void){
    int width;
    do
    {
        width = get_int("Type a number between 1 and 8: \n");
    }
    while (width < 1 || width > 8 );
    return width;
}
