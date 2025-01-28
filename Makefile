all:
	gcc -o build/timer timer.c -O2
	build/timer
clean:
	rm build/*
