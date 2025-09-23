CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++23 -O2
TARGET := main
TESTDIR := tests

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

test: $(TARGET)
	@shopt -s nullglob; \
	for f in $(TESTDIR)/*.in; do \
	    base=$$(basename $$f .in); \
	    out="$(TESTDIR)/my_$${base}.out"; \
	    expected="$(TESTDIR)/$${base}.out"; \
	    echo "Running $$f..."; \
	    ./$(TARGET) < $$f > $$out; \
	    if [ -f "$$expected" ]; then \
	        if diff -q "$$expected" "$$out" > /dev/null; then \
	            echo "  OK"; \
	        else \
	            echo "  FAIL (see diff below)"; \
	            diff -u "$$expected" "$$out" || true; \
	        fi; \
	    else \
	        echo "  Expected output $$expected not found"; \
	    fi; \
	done

clean:
	rm -f $(TARGET) $(TESTDIR)/my_*.out

