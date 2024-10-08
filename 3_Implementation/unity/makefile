CC = gcc
CFLAGS = -Iinc -Iunity

SRC = src/temperature_converter.c unity/unity.c
TEST_SRC = test/test_temperature_converter.c

all: test

test: $(SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) -o test.out $(SRC) $(TEST_SRC)
	./test.out

clean:
	rm -f *.out
