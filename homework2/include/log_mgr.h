/*
   * Library to handle Logging
   *
   * @author brandon tarney
   * @date  3/17/2017
   */
#ifndef _LOG_MGR_
#define _LOG_MGR_

typedef enum {INFO, WARNING, FATAL} Levels;
const char* enumString[] = { "INFO", "WARNING", "FATAL" };

char *logfile = "./logfile";
int fd;
char buffer[256];
int bytesWritten;

/*
   * LOG_EVENT
   * <p>Take the argument information, format it into a time-tagged line of text, and append it to the current log file.<p>
   * <p>No text msgs should appear garbled or lost in the log_file, regardless of # of proc. running & logging.<p>
   *
   * @param     I       Log leve
   * @param     fmt     character pointer to a string containing a format specfication for hte log messages. This format string is similar in funciton to the format string in the prinf() familiy of standard output routines
   * @param     ...    parameters of varying types and count (argument list) use vsprintf() function which takes a variable of type va_list as its last argument 
   *
   * @return    int    OK (0) upon successful return and ERROR (-1) otherwise
   */
int log_event(Levels I, const char *fmt, ...);

/*
   * SET_LOGFILE
   * <p>Allows the user to change th file used for the logging of messages for a particular process.<p>
   * <p>Not required to call this fcn before log_event()<p>
   * <p>When called, file is opened (or created), if success prev. logfile closed, new file used for log_event()<p>
   *
   * @param     logfile_name    name of file to open or create
   *
   * @return    int    OK (0) upon successful return and ERROR (-1) otherwise
   */
int set_logfile(const char* logfile_name);

/*
   * CLOSE_LOGFILE
   * <p>Called whenever a logfile is to be closed. At a minimum this function should close the FD associated w/ open logfile.<p>
   *
   * @param
   * @return
   *
   */
void close_logfile(void);

#endif
