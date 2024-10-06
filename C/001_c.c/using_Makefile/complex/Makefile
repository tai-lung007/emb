# Compiler and flags
CC = gcc
CFLAGS = -I./inc


# Directories
SRCDIR = src
BUILDDIR = build
TARGET = $(BUILDDIR)/hello




# Source files
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:$(SRCDIR)/%.c=$(BUILDDIR)/%.o)


# Deafault target
all: $(TARGET)




# Link object files to create the final executable
$(TARGET): $(OBJS)
	@mkdir -p $(BUILDDIR)
	$(CC) $(OBJS) -o $(TARGET) 


# Compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@



# Clean up build directory
clean:
	rm -rf $(BUILDDIR)




# Phony targets
.PHONY: all clean


