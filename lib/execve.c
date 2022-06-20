/*
 *  linux/lib/execve.c
 *
 *  (C) 1991  Linus Torvalds
 */

#define __LIBRARY__
#include <unistd.h>

_syscall3(int,execve,const char *,file,char **,argv,char **,envp)
_syscall3(int,execve2,const char *,file,char **,argv,char **,envp)
// _syscall3(int,getdents,unsigned int,fd,struct linux_dirent *,dirp,unsigned int,count)
// _syscall1(int,sleep,unsigned int,seconds)
// _syscall2(long,getcwd,char *,buf,size_t,size)