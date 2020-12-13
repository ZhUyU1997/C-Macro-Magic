sinclude scripts/env.mk

W_CFLAGS	= -Wall -Werror=implicit-function-declaration
X_CFLAGS	+= -std=gnu11 -O0 -g -ggdb $(W_FLAGS)
			
NAME	:= cmm
SRC		+= *.c