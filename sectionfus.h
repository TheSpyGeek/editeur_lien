#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <string.h>
#include "elfheader.h"
#include "elfsectiontab.h"

typedef struct {
	char name[256];
	int type, offset1, size1, offset2, size2, newnum, numorigin;
} sect_tab;

int sectfusion (Elf32_Ehdr * header1, Elf32_Shdr * shtab1, const char *filepath1, Elf32_Ehdr * header2, Elf32_Shdr * shtab2, const char *filepath2, sect_tab * tab);
