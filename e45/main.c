/*
 * 
 *                              YOLO LICENSE
 *                           rjuan , Apr 22 2019
 * 
 *      THIS SOFTWARE LICENSE IS PROVIDED "ALL CAPS" SO THAT YOU KNOW IT
 *      IS SUPER SERIOUS AND YOU DON'T MESS AROUND WITH COPYRIGHT LAW.
 *      BECAUSE YOU WILL GET IN TROUBLE. HERE ARE SOME OTHER BUZZWORDS
 *      COMMONLY IN THESE THINGS: WARRANTIES LIABILITY CONTRACT TORT LIABLE
 *      CLAIMS RESTRICTION MERCHANTABILITY. NOW HERE'S THE REAL LICENSE:
 * 
 *       0. This code is public domain.
 *       1. You may share back improved code
 *       2. Enjoy your time on earth :)
 * 
 * 
 * 
 * --------------------------------------------------------------------------
 * 
 *    Created Date: Wed Apr 24 2019
 *    Author: richard juan <labruillere@gmail.com>
 * 
 *    Last Modified: Wed Apr 24 2019
 *    Modified By: richard juan <labruillere@gmail.com>
 * 
 * 
 */

#include "../libs/img/img.h"
#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc != 2 ){
        printf("Usage: %s image\n", argv[0]);
        return 1;
    }
    image img = load_image(argv[1], 640, 640, 3);
    save_image(img, "result\0", PNG, 80);
    return 0;
}