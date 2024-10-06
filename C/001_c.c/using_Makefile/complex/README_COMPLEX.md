To organize your project into `inc`, `src`, and `build` directories with a `Makefile`.

Here's the structure of the project:

```
project/
├── inc/
│   └── hello.h
├── src/
│   └── main.c
├── build/
├── Makefile
```

### Step 1: Create the `hello.h` header file in `inc/`

In `inc/hello.h`, define a simple function prototype:

```c
#ifndef HELLO_H
#define HELLO_H

void print_hello();

#endif
```

### Step 2: Create the `main.c` source file in `src/`

In `src/main.c`, include the header and implement the main function:

```c
#include <stdio.h>
#include "hello.h"

void print_hello() {
    printf("Hello, World!\n");
}

int main() {
    print_hello();
    return 0;
}
```

### Step 3: Write the `Makefile`

Now, create the `Makefile` in the root directory (`project/`). This Makefile will specify the build process, including the directories and targets.

```makefile
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

# Default target
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
```

### Step 4: Build the project

To build the project, run the `make` command in the root directory (`project/`):

```bash
make
```

This will:
- Create the `build/` directory if it doesn’t exist.
- Compile the source files into object files inside `build/`.
- Link the object files to generate the executable (`hello`) inside the `build/` directory.

### Step 5: Run the executable

After running `make`, the compiled executable will be in the `build/` directory. Run it like this:

```bash
./build/hello
```

You should see the output:

```
Hello, World!
``` 

This structure separates your headers, source files, and build artifacts, keeping the project clean and organized.
