ABC.exe:add2.o cube3.o even_odd.o multable.o main.o
	gcc -o ABC.exe add2.o cube3.o even_odd.o multable.o main.o
add2.o:add2.c
	gcc -c add2.c
cube3.o:cube3.c
	gcc -c cube3.c
even_odd.o:even_odd.c
	gcc -c even_odd.c
multable.o:multable.c
	gcc -c multable.c
main.o:main.c
	gcc -c main.c
