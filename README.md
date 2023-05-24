# printAcat

This program prints an ASCII art of a cat in the terminal using various ASCII characters.

The output is like the following :

```

Here is your cat.

            A____A
           /*    *\
          {   _  _ }
          A` >  v /<
        / !!!!! !!}
       / ! \!!!!! |
  ____{   ) |  |  |
 / ___{!!!c |  |  |
{ (___ \__\__@@_)@_)
 \____)
Paradise is no longer paradise if there is no cat.

```

## Installation

Dictionary of the project :

```tree

./
├── bin
├── Makefile
├── obj
├── README.md
└── src
    ├── main.c
    ├── prinAcat.h
    ├── printAcat.c
    ├── printInfo.c
    └── printInfo.h

```

To compile the program, run the following command in the terminal:

```bash

make
make clear

```

This will generate an executable file named `cat` under dictionary `./bin`.

## Usage

To run the program and print the ASCII cat, you can add `printAcat` to the envirnment varibles of your operation system and simply execute the following command in the terminal:

```bash

printAcat

```

The output will be printed to the standard output stream.

Argument usage is like the following :

```

Usage: printAcat [options] 

Options:
    -h, --help       Display help information.
    -v, --version    Display the version information.

```

## Contributing

Contributions are welcome! If you find a bug or have a suggestion for improvement, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).