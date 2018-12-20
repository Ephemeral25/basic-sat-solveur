/*
 * CNF READER header file
 */

/* 
 * File:   cnfReader.h
 * Author: ephemeral
 *
 * Created on 20 décembre 2018, 15:31
 */

#ifndef CNFREADER_H
#define CNFREADER_H

#include <stdio.h>
#include <stdlib.h>

FILE *open_file(const char *filename);
//Return CNF file's lines number
int lCount_file(FILE *data);
//Return CNF file's atoms number
int aCount_file(FILE *data);
//Return CNF file's atoms number per line
int aCountperLine_file(const char *filename);

//Translate a CNF file to 2D array
void lTranslate_file(FILE *data);


#endif /* CNFREADER_H */

