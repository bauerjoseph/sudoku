all:
	gcc generator.c -o generator
	./generator
	rm generator
