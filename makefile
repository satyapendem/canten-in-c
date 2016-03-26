all:kiet_canten

kiet_canten: main.o items.o noodels.o briyani.o vegpuff.o samosa.o
	gcc main.o items.o noodels.o briyani.o vegpuff.o samosa.o -o kiet_canten.o

main.o: main.c
	gcc -c main.c

items.o: items.c
	gcc -c items.c

noodels.o: noodels.c
	gcc -c noodels.c

briyani.o: briyani.c
	gcc -c briyani.c

vegpuff.o: vegpuff.c
	gcc -c vegpuff.c

samosa.o: samosa.c
	gcc -c samosa.c
