# MultiScript v. 2

## Overview

Feature | Description | Version
--------|-------------|--------
Modules | Allow code to be stored in different files which act as modules | 1
Variables | Variables can be global or local depending on their definition | 1
Functions | Functions can be implemented either in MultiScript or - via an external link - in C++ | 2

## Features

### Import a module

\t*Syntax: import \<module\>*

\t\t'module' can be a simple token, a path or a string

```
import name_of_module
import file/to/module
import 'file/to/module with space'
```

### Define a variable

\t*➜ Syntax: [let] \<varname\>*

```
let a
```

### Assign values to a variable

```
let a
a = 20

let b = 30
```
