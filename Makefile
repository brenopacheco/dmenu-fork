# dmenu - dynamic menu
# See LICENSE file for copyright and license details.

include config.mk

SRC = drw.c dmenu.c util.c
OBJ = $(SRC:.c=.o)

all: dmenu

.c.o:
	$(CC) -c $(CFLAGS) $<

$(OBJ): arg.h config.h config.mk drw.h

dmenu: dmenu.o drw.o util.o
	$(CC) -o $@ dmenu.o drw.o util.o $(LDFLAGS)

clean:
	rm -f dmenu dmenu-*.tar.gz $(OBJ)

version:
	@echo ${VERSION}

dist: all
	tar --create --file=dmenu-${VERSION}.tar --transform 's,^,bin/,' --mode='755' dmenu
	tar --append --file=dmenu-${VERSION}.tar --transform 's,^,share/man/man1/,' --mode='644' dmenu.1
	tar --append --file=dmenu-${VERSION}.tar --transform 's,^,share/licenses/dmenu/,' --mode='644' LICENSE
	gzip -f dmenu-${VERSION}.tar

.PHONY: all clean dist
