# slave-password-generator

A clever password generating tool

## Principle

This tool aims to provide a system to generate strong, (seemingly) random password for every website/application/system that ask for a password.

The tool takes a master password and a key, then generate a password that isn't random, composed of various alphanumerics characters, special characters, etc. As the password isn't random, the same master password and the same key will always yield the same password, so the user don't have to remember the password.

## Compilation

This software is developed with Qt5.2. With the development libraries and a C++ compiler installed and correctly configured (if you need informations, RTFM), you just have to `qmake` then `make release` and you're done.

## Usage

The software is composed of 3 fields :

- The master password
- The slave key
- The slave password

The slave password is computed as you type, so you don't have to click anywhere.

## Links

More informations can be found on my personnal website [elwinar.com](http://elwinar.com/article/un-generateur-de-mots-de-passe) (beware, article in french), and a PHP/JavaScript version can be found [here](http://elwinar.com/tools/slave-password-generator).

If you have some remarks, suggestions, etc, don't hesitate to contact me by any mean, I'm always pleased to help.
