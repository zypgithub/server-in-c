CC = gcc
LD = gcc
INC_DIR = include
SRC_DIR = src
OBJ_DIR = objects
INC_DIR = include
CFLAGS = -g -Wall -I$(INC_DIR)
LDFLAGS = 
SRCS = $(SRC_DIR)/server.c $(SRC_DIR)/network.c $(SRC_DIR)/process.c $(SRC_DIR)/tools.c $(SRC_DIR)/stringop.c $(SRC_DIR)/fileop.c $(SRC_DIR)/thread.c $(SRC_DIR)/multiplexingIO.c
OBJS = $(OBJ_DIR)/server.o $(OBJ_DIR)/network.o $(OBJ_DIR)/process.o $(OBJ_DIR)/tools.o $(OBJ_DIR)/stringop.o $(OBJ_DIR)/fileop.o $(OBJ_DIR)/thread.o $(OBJ_DIR)/multiplexingIO.o
PROG = ./startserver
RM = /bin/rm

# all: greetings

all: $(PROG)

# greetings: main.o greeter.o
# 	gcc -o greetings main.o greeter.o

$(PROG): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(PROG) -lpthread

#main.o: main.c
#	gcc -g -c main.c

#greeter.o: greeter.c
#	gcc -g -c greeter.c

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

#clean:
#	rm main.o greeter.o

clean:
	$(RM) $(PROG) $(OBJS)

