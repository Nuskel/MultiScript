# MultiScript v. 2

## Overview

Feature | Description | Version
--------|-------------|--------
Modules | Allow code to be stored in different files which act as modules | 1
Variables | Variables can be global or local depending on their definition | 1
Functions | Functions can be implemented either in MultiScript or - via an external link - in C++ | 2

## Features

### Import a module

*Syntax: import \<module\>  -- module as a token, path or string*

```
import name_of_module
import file/to/module
import 'file/to/module with space'
```

### Define a variable

*Syntax: let \<varname\>*

```
let a
```

### Assign values to a variable

*Syntax: \<varname\> = \<expression\>*

```
let a
a = 20

let b = 30
```

### Define a function

```
def add(x, y):
  return x + y
end

def printInt(int x: 0):
  debug x
end

def extern read(x)
```

### Expressions

```
let a = 1 + 2
let b = 1 * 3 + 2
let c = 1 * (3 + 2)
let d = add(a, 1) + 1 * 2
```

### While loops

*Syntax: while \<logical expression\> do ... end*

```
let x = 0

while x < 20 do
  x = x + 1
end

debug x
```

> 20
