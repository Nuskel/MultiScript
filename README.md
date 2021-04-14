# MultiScript v. 2

## Overview

Feature | Description | Version
--------|-------------|--------
Modules | Allow code to be stored in different files which act as modules | 1
Variables | Variables can be global or local depending on their definition | 1
Functions | Functions can be implemented either in MultiScript or - via an external link - in C++ | 2

## Features

### Import a module

 *➜ Syntax: import <module>*
    .. with <module> as the file name without the extension
    .. can be put in a string for whitespace support

`
import name_of_module
import file/to/module
import 'file/to/module with space'
`

## Define a variable

 *➜ Syntax: [let] \<varname\>*

`
let a
`

## Assign values to a variable

`
let a
a = 20

let b = 30
`
