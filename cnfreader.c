/*
 * CNF READER source file
 */
#include "cnfreader.h"

#define VERBOSE 1

FILE *open_file(const char *filename) {
    FILE *data;
    data = fopen(filename, "r");
    
    if(!data) {
        perror("[ERROR]: ");
        exit(EXIT_FAILURE);
    }
    return data;
}

int readComments_file(FILE *data) {
    fseek(data, 0, SEEK_SET);
    int c = 0;
    
    if((c = fgetc(data), c == 99) && ((c = fgetc(data)), c == 32)) {
        while(c != 10) {
            printf("%c", c);
            c = fgetc(data);
        }
        return(EXIT_SUCCESS);
    }
    fprintf(stderr, "[ERROR]: Couldn't read DIMACS file's comments\n");
    return(EXIT_FAILURE);
}

/**
 * 
 * @param data
 * @return success/fail
 * 
 *  @comment Comments on DIMACS's file have a 65char lim
 */
int clauseCount_file(FILE *data) {
    fseek(data, 0, SEEK_SET);
    int c = 0, n = 0, k = 0;
    char *tmp = NULL;
    
    for(c = fgetc(data); c != EOF; c=fgetc(data)) {
        if(c == 112, (c = fgetc(data), c == 32)) 
            for(;c != '\n'; c = fgetc(data)) {
                if(n == 3) {
                    fscanf(data, "%i", k);
                    if(VERBOSE)
                        printf("\n[INFO]: %i clauses found in the data sheet\n", c);
                    return c;
                }
                if(c == 32)
                    n++;
            }
    }
    
    fprintf(stderr ,"[ERROR]: Coundl't gather info for DIMACS's file!");
    return(EXIT_FAILURE);
}

int atomCount_file(FILE *data) {
    
}

int atomCountperL_file(const char *filename) {
    
}

void lTranslate_file(FILE *data) {
    if(VERBOSE)
        printf("[INFO]: Starting file translating...\n");
  //Display 'c' line of the datasheets
  readComments_file(data);
  //Display the number of clauses contained in the datasheets
  clauseCount_file(data);
    
  if(VERBOSE)
      printf("\n[INFO]: Successfully translated the file!\n");
}
