/*
 * CNF READER source file
 */
#include <stdio.h>
#include <stdlib.h>

#include "cnfreader.h"

const int VERBOSE = 0;

FILE *open_file(const char *filename) {
    FILE *data;
    data = fopen(filename, "r");
    
    if(!data) {
        perror("[ERROR]: ");
        return(EXIT_FAILURE);
    }
    return data;
}

int lCount_file(char single) {

}

int aCount_file(char single) {
    
}

int aCountperLine_file(const char *filename) {
    
}

void lTranslate_file(FILE *data) {
    //Place cursor at the begginning of the file
    fseek(data, 0, SEEK_SET);
    
    
}
