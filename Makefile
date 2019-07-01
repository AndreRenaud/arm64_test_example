CFLAGS=-g -Wall -pipe -Werror

tests: tests.c
	$(CC) -o $@ $< $(CFLAGS) -static

clean:
	rm tests
