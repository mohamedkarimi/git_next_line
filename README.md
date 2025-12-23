# get_next_line (42 Network)

This project is my personal implementation of **get_next_line**, a project from the 42 Network curriculum.  
The goal is to create a function in C that reads a file descriptor line by line.

##About the project

The `get_next_line` function allows reading a file (or standard input) **one line at a time**, returning each line on successive calls.  
It handles buffering internally and supports reading from different file descriptors.

This project helps understand:
- File descriptors
- Static variables
- Memory management
- Buffer handling

##Function prototype

```c
char *get_next_line(int fd);

