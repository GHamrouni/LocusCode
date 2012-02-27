CC=gcc
CFLAGS=-c -Wall -Wextra -pedantic -Werror
LDFLAGS=
LIBS=-lm
SOURCES=projection.c projection_family.c standard_normal.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=test
OUT = libLocusCode.a
.PHONY: clean purge

all: $(SOURCES) $(OUT)

$(OUT): $(OBJECTS) 
	ar rcs $(OUT) $(OBJECTS)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $< -o $@

purge: clean
	rm -f *.o
