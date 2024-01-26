none:
	gcc src/*.c -o edit -lncurses
run:
	gcc src/*.c -o edit -lncurses
	./edit
