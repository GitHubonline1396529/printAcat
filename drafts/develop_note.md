# Develop note of printAcat

Makefile 是一种用于自动化编译程序的工具。下面是一个简单的 Makefile 示例：

```
CC = gcc
CFLAGS = -Wall -Wextra -g

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SOURCES := $(wildcard $(SRCDIR)/*.c)
OBJECTS := $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))
EXECUTABLE := $(BINDIR)/myprogram

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
 $(CC) $(CFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
 $(CC) $(CFLAGS) -c $< -o $@

clean:
 rm -f $(EXECUTABLE) $(OBJECTS)

.PHONY: clean
```

在这个示例中，我们定义了三个目录：`src`、`obj` 和 `bin`。其中，`src` 目录存放源代码文件，`obj` 目录存放编译生成的目标文件，`bin` 目录存放最终生成的可执行文件。

在 Makefile 中，我们使用变量来表示目录和文件名。例如，定义了 `SRCDIR = src` 后，就可以使用 `$(SRCDIR)` 来代替 `src` 目录。

为了指定输出的二进制文件目录，我们可以在 Makefile 中设置 `BINDIR` 变量，并在生成可执行文件时使用该变量。例如，在上面的示例中，我们使用 `$(BINDIR)/myprogram` 来指定可执行文件的输出路径。

同样地，为了指定源代码目录，我们可以在 Makefile 中设置 `SRCDIR` 变量，并在编译时使用该变量。例如，在上面的示例中，我们使用 `$(SRCDIR)/%.c` 来表示源代码文件的路径。

需要注意的是，在 Makefile 中，我们使用了一些特殊的符号和命令。例如，`$@` 表示当前规则的目标文件名，`$^` 表示当前规则所依赖的所有文件名。这些符号和命令都有特殊的含义，请务必查阅相关文档以了解更多细节。

Use the following command to push the project.

```shell

git init
git add *
git commit -m "version 1.1.0.0200"
git remote add origin https://github.com/GitHubonline1396529/printAcat
git push -u origin master

```
