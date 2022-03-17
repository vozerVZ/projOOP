.PHONY: all clean run
FILENAME = main
all: $(FILENAME)
clean:
	rm $(FILENAME) *.o
run: $(FILENAME)
	./$(FILENAME)
main.o: main.cpp
	g++ -c main.cpp
DatabaseHandler.o: DatabaseHandler.cpp
	g++ -c DatabaseHandler.cpp
Student.o: Student.cpp
	g++ -c Student.cpp
$(FILENAME): main.o DatabaseHandler.o Student.o
	g++ main.o DatabaseHandler.o Student.o -o $(FILENAME) -lm
