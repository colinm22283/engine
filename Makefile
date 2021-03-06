all:
	g++ -std=c++17 -I ./header -I ./scripts/header -o ./out ./source/*.cpp ./scripts/source/*.cpp -L"lib" -Wall -lSDL2main -lSDL2 -lSDL2_ttf -pthread
	./out
compile:
	g++ -std=c++17 -I ./header -I ./scripts/header -o ./out ./source/*.cpp ./scripts/source/*.cpp -L"lib" -Wall -lSDL2main -lSDL2 -lSDL2_ttf -pthread
run:
	./out
push:
	git add ./header ./source ./scripts/header ./scripts/source ./build ./fonts
	git commit -a -m "experimental scene build"
	git push origin main
