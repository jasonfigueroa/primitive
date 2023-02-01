LIBDIR ?= ./lib
INCLUDEDIR ?= ./include
OUTPUTDIR ?= ./output

default:
	make primitive.o
	make primitive.so

primitive.o: ./primitive.c ./primitive.h
	mkdir $(INCLUDEDIR)
	cp primitive.h $(INCLUDEDIR)/primitive.h    
	mkdir $(OUTPUTDIR)
	gcc -c -Wall -Werror -fpic -o $(OUTPUTDIR)/primitive.o primitive.c

primitive.so: $(OUTPUTDIR)/primitive.o
	mkdir $(LIBDIR)
	gcc -shared -o $(LIBDIR)/libprimitive.so $(OUTPUTDIR)/primitive.o

clean:
	rm -rf $(LIBDIR)
	rm -rf $(INCLUDEDIR)
	rm -rf $(OUTPUTDIR)
