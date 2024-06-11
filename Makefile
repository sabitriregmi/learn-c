CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC_DIR = src
EXECUTABLE = output

all: $(EXECUTABLE) build clean

$(EXECUTABLE): $(SRC_DIR)/$(f).c
	@$(CC) -o $@ $<

build: $(EXECUTABLE)
	@./$(EXECUTABLE)

clean:
	@rm -f $(EXECUTABLE)
