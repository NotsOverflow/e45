# 
#                              YOLO LICENSE
#                           rjuan , Apr 22 2019
# 
#      THIS SOFTWARE LICENSE IS PROVIDED "ALL CAPS" SO THAT YOU KNOW IT
#      IS SUPER SERIOUS AND YOU DON'T MESS AROUND WITH COPYRIGHT LAW.
#      BECAUSE YOU WILL GET IN TROUBLE. HERE ARE SOME OTHER BUZZWORDS
#      COMMONLY IN THESE THINGS: WARRANTIES LIABILITY CONTRACT TORT LIABLE
#      CLAIMS RESTRICTION MERCHANTABILITY. NOW HERE'S THE REAL LICENSE:
# 
#       0. This code is public domain.
#       1. You may share back improved code
#       2. Enjoy your time on earth :)
# 
# 
# 
# --------------------------------------------------------------------------
# 
#    Created Date: Wed Apr 24 2019
#    Author: richard juan <labruillere@gmail.com>
# 
#    Last Modified: Wed Apr 24 2019
#    Modified By: richard juan <labruillere@gmail.com>
# 
# 

EXE := exp45
CC := gcc

CPPFLAGS := -I ./libs/stb -I ./libs/img -I ./e45/headers
CFLAGS := -Wall  -O3 -flto -ffast-math
#CFLAGS=-Wall `pkg-config --cflags opencv` -O0 -g
#LDFLAGS := -Llib
LDLIBS := -lm
VPATH := ./e45/:./e45/srcs/:./libs/stb/:./libs/img/

OBJ := objs/image.o objs/image_write.o objs/main.o objs/img.o

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

objs/%.o: %.c 
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf $(OBJ) $(EXE)