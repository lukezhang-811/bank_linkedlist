bank:ssv.o linked.o main.o
	gcc -pg -o bank ssv.o linked.o main.o
ssv.o:ssv.c
	gcc -c ssv.c
linked.o:linked.c
	gcc -c linked.c
main.o:main.c
	gcc -c main.c
