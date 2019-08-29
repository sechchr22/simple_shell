# Our Shell
This is our project for Holberton; a small sample of the operation of a Shell where we are also applying the knowledge we have of the C language.

# Built in
The C Programming Language

# Environment
- Ubuntu 14.04 LTS
- Vagrant
- VirtualBox

# Output
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
The only difference is when you print an error, the name of the program must be equivalent to your argv[0].

Example of error with sh:
```sh
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with your program hsh:
```sh
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
#  Example
 
## Interactive Mode
```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh
($)ls
AUTHORS    _getenv.c   _realloc.c  _strcmp.c  _strlen.c   builtins.c		 hsh	man_1_simple_shell  read_command.c  split_into_arguments.c
README.md  _getline.c  _strcat.c   _strcpy.c  _strncmp.c  free_double_pointer.c  hsh.c	myshell_execute.c   shellheader.h   split_path.c
($)
```
## Non-interactive Mode

```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ echo "ls" | ./hsh 
AUTHORS    _getenv.c   _realloc.c  _strcmp.c  _strlen.c   builtins.c		 hsh	man_1_simple_shell  read_command.c  split_into_arguments.c
README.md  _getline.c  _strcat.c   _strcpy.c  _strncmp.c  free_double_pointer.c  hsh.c	myshell_execute.c   shellheader.h   split_path.c
```

## Installing
To clone the repo (depending on whose repo):
```sh
https://github.com/sechchr22/simple_shell
```

# Compiler
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

# Description of File Structure

| File | Description |
| ------ | ------ |
| builtins.c | Builtin functions |
| free_double_pointer.c | function to free a pointer to an array of string |
| _getenv.c | Function to get an environmnet variable |
| _getline.c | Our get_line function |
| hsh.c | Shell main function |
| myshell_execute.c | Shell execute |
| read_command.c | Read the command that the user will type |
| _realloc.c | Function to realloc space of memory |
| split_into_arguments.c | Function to split the line indexed |
| split_path.c | Function to split env variable PATH into tokens |
| _strcat.c | Function to happen when executable is not founded |
| _strcmp.c | Function to compare two strings lexicographically |
| _strcpy.c | Function to copi strings |
| _strlen.c | Run to lenght of the string |
| _strncmp.c | Function to compare strings until an  n index |
| wait_free_directories | Functions to wait an free a double pointer |
 
### Development

Sergio Rueda

Mary Serna

License
----
MIT

