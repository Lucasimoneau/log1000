EXEC = newton
LDFLAGS = -lm
CFLAGS = -W -Wall -ansi -pedantic
CC = gcc
# default command, builds an executable called "newton".
# executable can be called with ./newton 49 4
all: $(EXEC)

# link the object files into the executable.
# the -lm option is to tell the linker to include math libraries.
$(EXEC): newton.o comparison.o main.o
	$(CC) -o $@ $^ $(LDFLAGS)

# compile the main.c file into the main.o object file.
main.o: main.c newton.h comparison.h
	$(CC) -o $@ -c $< 

# compile the newton.c file into the newton.o object file.
newton.o: newton.c newton.h
	$(CC) -o $@ -c $<

comparison.o: comparison.c comparison.h
	$(CC) -o $@ -c $<

# remove the executable and intermediary object files.
clean:
	rm -rf *.o
	rm -rf $(EXEC)


install: $(EXEC)
	if [ ! -d "./install" ];then     \
                mkdir install;           \
     fi
	cp -rf newton ./install/newton
