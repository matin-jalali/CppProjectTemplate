dependency:
	rm -rf build/*
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImg.png

prepare:
	rm -rf build
	mkdir build
	cp script.sh build/
