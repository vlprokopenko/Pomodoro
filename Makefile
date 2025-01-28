all:
	gcc -o timer timer.c -O2
	build/timer
clean:
	rm timer
