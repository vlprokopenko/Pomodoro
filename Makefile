all:
	gcc -o timer timer.c -O2
	timer
clean:
	rm timer
