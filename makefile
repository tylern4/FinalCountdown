CXX = g++
CXXFLAGS =      -O2 -w -g
TARGET =	    countdown
SRC =		$(wildcard *.cpp)
FILENAME=	$(SRC:.cpp=.o)

all:	clean countdown

countdown:	$(FILENAME) 
	$(CXX) $(FILENAME) -L. $(CXXFLAGS) -o $(TARGET) 

clean:
	-rm -f $(OBJS) $(LIBOUT) $(TARGET) $(FILENAME)
