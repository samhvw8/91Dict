#ifndef __91_ICT__
#define __91_ICT__
#include <sys/stat.h>
#include <gtk/gtk.h>
#include "support.h"

////////// For DB
// check exist file
int check_file_exist(const char *file_name);

// create db file from foldoc data file
void foldoc_load_2_tree(BTA *tree, const char *foldoc_file);

// Create soundex db file from word db file
void gen_soundex_db(BTA *soundex_t, BTA *word_t);

// soundex find similar string
char *soundex(const char *in);

///////// Support API for singal processing
// Support for Add in add dialog
gboolean add_word_to_dict(ChData *data, char *word, char *mean);


#endif
