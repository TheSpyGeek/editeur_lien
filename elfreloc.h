#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

#include "filereader.h"
#include "elfsectiontab.h"

Elf32_Sym * readReloc(Elf32_Ehdr header, Elf32_Shdr * Shtab, char * filePath, int isVerbose);

int printReloc( Elf32_Sym * Symtab);
