# printAcat

This program is about a cat in terminal. The output of this program is as the following :

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

To compile the program, run `make` in the terminal and you'll find the release binary file under `./bin`

Also, 

```bash
# to clean the bin and obj files
make clear
# to make printAcat
make
```

This will generate an executable file named `cat` in dictionary `./bin`.

## Usage

To run the program and print the ASCII cat, you can add `printAcat` to the envirnment varibles of your operation system and simply execute the following command in the terminal:

```bash
printAcat
```

The output will be printed to the standard output stream.

Usage is as the following :

```
Usage: printAcat [options] 

Options:
    -d, --double     Display two cats.
    -h, --help       Display help information.
    -v, --version    Display the version information.
```

## Contributing

Contributions are welcomed! If you find a bug or have a suggestion for improvement, please open an issue or submit a pull request.

## License

This project is licensed under the [GPL3 License](https://opensource.org/license/gpl-3-0/). see [LICENCE](LICENCE) for more information
