# directory name == problem id
PROGRAM=$(shell basename `pwd`)
OBJS=$(PROGRAM).o

INPUT=$(PROGRAM).in
OUTPUT=$(PROGRAM).out
ANSWER=$(PROGRAM).ans

CXX=g++
CXXFLAGS=-Wall

.SUFFIXES:.cpp .o
.PHONY: all run clean

$(PROGRAM): $(OBJS)
	$(CXX) -o $(PROGRAM) $^

.cpp.o:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $<

all: run

run: $(PROGRAM) $(INPUT) $(ANSWER)
	$(RM) $(OUTPUT)
	cat $(INPUT) | ./$(PROGRAM) | tee $(OUTPUT)
	diff -sc $(OUTPUT) $(ANSWER)

clean:
	$(RM) *~ $(PROGRAM) $(OBJS) $(OUTPUT)
