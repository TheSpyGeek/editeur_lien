#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <string.h>
#include "filereader.h"
#include "util.h"
#include "elfstruct.h"

/*prend en entree un Elf32_Shdr *, un Elf32_Ehdr * et un nom de fichier
le Elf32_Shdr * est rempli par effet de bord et contiendra chaque section*/
int readSectTab(ELF_STRUCT file);

/*prend en entree un Elf32_Shdr *, un Elf32_Ehdr * et un nom de fichier
il affiche le contenu (les infos) de chaque section contenu dans le Elf32_Shdr * */
void aff_Sheader(ELF_STRUCT file);
