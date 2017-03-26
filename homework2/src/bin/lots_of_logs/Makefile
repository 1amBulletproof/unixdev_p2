OBJS	= test_log.o
OBJS2	= test_log2.o
LLOBJS	= lots_of_logs.o
LIBDIR	= .
CFLAGS	= -Ilog_lib
CC	= gcc
LIBS	= liblog_mgr.a

all: test_log test_log2 lots_of_logs

test_log: $(OBJS) $(LIBS)
	$(CC) $(OBJS) -L$(LIBDIR) -llog_mgr -o $@

test_log2: $(OBJS2) $(LIBS)
	$(CC) $(OBJS2) -L$(LIBDIR) -llog_mgr -o $@

lots_of_logs: $(LLOBJS) $(LIBS)
	$(CC) $(LLOBJS) -L$(LIBDIR) -llog_mgr -o $@

clean:
	rm -f $(OBJS) $(OBJS2) $(LLOBJS) test_log test_log2 lots_of_logs
