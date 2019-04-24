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

#ifndef __img__
#define __img__

#ifndef STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#include "../stb/image.h"
#endif
#ifndef STB_IMAGE_WRITE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "../stb/image_write.h"
#endif
#include <stdio.h>
#include <string.h>
#include <assert.h>



enum { PNG, BMP, TGA, JPG };

typedef struct {
        int h;
        int w;
        int c;
        float *data;
}   image;

image   load_image(char *filename, int w, int h, int c);
image   make_image(int w, int h, int c);
image   resize_image(image im, int w, int h);
image   make_empty_image(int w, int h, int c);
image   load_image_stb(char *filename, int channels);
void    free_image(image m);
float get_pixel(image m, int x, int y, int c);
void set_pixel(image m, int x, int y, int c, float val);
void add_pixel(image m, int x, int y, int c, float val);
void save_image(image im, const char *name, int f, int quality);
image copy_image(image p);

#endif