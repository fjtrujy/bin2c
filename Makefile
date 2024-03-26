# Compiler
CC=gcc

# Compiler flags
CFLAGS=-Wall -Wextra

# Source files
SRCS=bin2c.c

# Object files
OBJS=$(SRCS:.c=.o)

# Executable name
TARGET=bin2c

# Default target
all: $(TARGET)

# Rule to generate object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to generate executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Clean target
clean:
	rm -f $(OBJS) $(TARGET)
