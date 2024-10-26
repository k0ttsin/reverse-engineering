You need to compile python to c and then to binary using gcc.

Example :<br>
`pip3 install cython` <br>
`PYTHONLIBVER=python$(python3 -c 'import sys; print(".".join(map(str, sys.version_info[:2])))')$(python3-config --abiflags)`<br>
`gcc -Os $(python3-config --includes) app.c -o app $(python3-config --ldflags) -l$PYTHONLIBVER`<br>
