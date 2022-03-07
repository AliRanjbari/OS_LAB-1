#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"



void
sort_string(char* string){
    int length = strlen(string);

    for(int i=0; i<length; i++)
        for(int j=i; j<length; j++)
            if(string[i] > string[j]){
                char temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
    
    printf(1, "%s\n", string);
}


int 
main(int argc, char *argv[]){
    if(argc < 2){
        printf(1, "please enter a string\n");
    }
    else
        sort_string(argv[1]);
    exit();

}