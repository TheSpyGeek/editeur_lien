#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include "filereader.h"
#include "elfsectiontab.h"
#include "elfsection.h"
#include "elfstruct.h"
/*Prend comme entree un Elf32_Ehdr * et un Elf32_Shdr* et renvoit l'indice de la table de symbole Symtab de type 2 */
int getIndSectionSymtab(Elf32_Ehdr * header,Elf32_Shdr* shtab);

/*Prend comme entree un Elf32_Ehdr et un Elf32_Shdr* et renvoit l'indice de la table de symbole Symtab de type 6 */
int getIndSectionDynsym(Elf32_Ehdr * header,Elf32_Shdr* shtab);

/*Prend comme entree un Elf32_Ehdr, un Elf32_Shdr*, un nom de fichier ainsi que l'indice de la table de symbole choisie 
et rempli par effet de bord un Shtab,Elf32_Sym * qui sera le tableau de tous les symboles de la section d'indice indice_symtab */
int readSymbtab(ELF_STRUCT file);

/*Prend comme entree un Elf32_Ehdr, un Elf32_Shdr*, un nom de fichier ainsi que l'indice et la table de symbole choisie 
et en affiche son contenu */
void aff_Symtable(ELF_STRUCT file);
