/*
 * CNF READER source file
 */
#include "cnfreader.h"

const int VERBOSE = 1;

FILE *open_file(const char *filename) {
    FILE *data;
    data = fopen(filename, "r");
    
    if(!data) {
        perror("[ERROR]: ");
        exit(EXIT_FAILURE);
    }
    return data;
}

int lCount_file(FILE *data) {
    fseek(data, 0, SEEK_SET);
    int n, c;
    
    while((c = fgetc(data) != EOF))
        if(c == 10)
            n++;
    
    if(VERBOSE)
        printf("[INFO] : CNF File contains %d lines\n", n);
    return n;   
}

int aCount_file(FILE *data) {
    
}

int aCountperLine_file(const char *filename) {
    
}

void lTranslate_file(FILE *data) {
    //Place cursor at the begginning of the file
    lCount_file(data);
    
    
}
