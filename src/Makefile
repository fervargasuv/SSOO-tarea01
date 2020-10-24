TARGET = ../hora
OBJS = $(OBJ_DIR)/hora.o
CC = gcc
OBJ_DIR =./obj
SRC_DIR = .
INCDIR =./includes
CFLAGS = -Wall -I$(INCDIR) 

$(TARGET) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $(CFLAGS) $< -o $@
	
.PHONY : clean
clean:
	@rm -r $(OBJ_DIR)

