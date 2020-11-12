CC= gcc
AR=ar
OBJECTS_MAIN=main.o;
FLAGS=-Wall -g

all: main

main: main.o basicMath.o power.o
	$(CC) $(FLAGS) basicMath.o power.o main.o -o main
	
mymaths: libmyMath.a 

mymathd: libmyMath.so 

mains: main.o libmyMath.a 
		$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o libmyMath.so
		$(CC) $(FLAGS) -o maind main.o libmyMath.so

libmyMath.so: power.o basicMath.o 
		$(CC) -shared -o libmyMath.so power.o basicMath.o 

libmyMath.a: power.o basicMath.o 
		$(AR) -rcs libmyMath.a power.o basicMath.o 


main.o: main.c myMath.h
		$(CC) $(FLAGS) -c main.c  

Power.o: power.c myMath.h
		$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
		$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean:
	rm -f maind mains main *.so *.a *.o

		 