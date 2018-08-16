//
// Created by Claudio Alvarez Gomez on 8/15/18.
//

#ifndef T1_1_CONST_H
#define T1_1_CONST_H

// path to the domain socket used to communicate datagen and binsearch
const char* DSOCKET_PATH = "/tmp/dg.sock";
const char* DATAGEN_BEGIN_CMD_FMT = "%s %c %d";
const char* DATAGEN_OK_RESPONSE = "OK\n\n";
const char* DATAGEN_END_CMD = "END";

#endif //T1_1_CONST_H
