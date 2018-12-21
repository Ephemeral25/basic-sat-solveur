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

//prints comments contained in the DIMACS's file 
int readComments_file(FILE *data);

//returns DIMACS file's clauses number
int clauseCount_file(FILE *data);
//returns DIMACS file's atoms total number
int atomCount_file(FILE *data);
//returns DIMACS file's atoms number per line
int aCountPerL_file(const char *filename);
//returns CNF file's litterals number

//Translate a CNF file to 2D array
void lTranslate_file(FILE *data);


#endif /* CNFREADER_H */

