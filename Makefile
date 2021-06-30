main: function.c main.c
	gcc -o main $^

test: function.c test.c mock_time.c
	gcc -o test $^
