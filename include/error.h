#ifndef CP_TOOLS_ERROR_H 
#define CP_TOOLS_ERROR_H 

#define CP_TOOLS_OK                                     0
#define CP_TOOLS_ERROR_MISSING_ARGUMENT                 -1
#define CP_TOOLS_ERROR_INVALID_PARAMETER                -2
#define CP_TOOLS_ERROR_INVALID_COMMAND                  -3

#define CP_TOOLS_ERROR_INIT_INVALID_OPTION              -10
#define CP_TOOLS_ERROR_INIT_COPY_FILES                  -11

#define CP_TOOLS_ERROR_CLEAN_INVALID_OPTION             -20
#define CP_TOOLS_ERROR_CLEAN_DELETE_FILES               -21

#define CP_TOOLS_ERROR_GENTEX_INVALID_OPTION            -30
#define CP_TOOLS_ERROR_GENTEX_LIST_DOCUMENT_CLASSES     -31
#define CP_TOOLS_ERROR_GENTEX_INVALID_OUTFILE           -32

#define CP_TOOLS_ERROR_GENPDF_INVALID_OPTION            -40
#define CP_TOOLS_ERROR_GENPDF_INVALID_OUTFILE           -41

#define CP_TOOLS_ERROR_CHECK_MISSING_IO_FILES           -50

#define CP_TOOLS_ERROR_SH_COPY_FILE                     -101
#define CP_TOOLS_ERROR_SH_COPY_DIRECTORY                -102
#define CP_TOOLS_ERROR_SH_CREATE_DIRECTORY              -103
#define CP_TOOLS_ERROR_SH_REMOVE_DIRECTORY              -104
#define CP_TOOLS_ERROR_SH_BUILD_EXT_NOT_FOUND           -105
#define CP_TOOLS_ERROR_SH_CPP_COMPILATION_ERROR         -106
#define CP_TOOLS_ERROR_SH_PROCESS_ERROR                 -107
#define CP_TOOLS_ERROR_SH_PDFLATEX_ERROR                -108

#endif
