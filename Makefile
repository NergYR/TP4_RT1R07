CC=gcc
FLAGS= -Wall
LIBS= -lm 
EXEC= premiersanswTableau
SRC_PATH = src/
DESTDIR = bin/
%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@


all: $(EXEC)

premiersanswTableau: $(SRC_PATH)main.o # $(SRC_PATH)func.o
	$(CC) $(LIBS) $(FLAGS) -o $(DESTDIR)$@ $^

clean: 	
	rm $(SRC_PATH)*.o $(DESTDIR)*

