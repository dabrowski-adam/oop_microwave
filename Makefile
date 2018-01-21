.PHONY: build clean

build:
	cd ./build && \
	cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. && \
	mv -f ./compile_commands.json ../compile_commands.json && \
	make && \
	./TestProject

clean:
	rm -rf ./build/*
	rm -f ./compile_commands.json