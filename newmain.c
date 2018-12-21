/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: ephemeral
 *
 * Created on 20 décembre 2018, 17:22
 */
#include "cnfreader.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char f[] = "DataSheet.txt";
    FILE *data = open_file(f);
    lTranslate_file(data);
    return (EXIT_SUCCESS);
}

