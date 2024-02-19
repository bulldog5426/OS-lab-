
#!/bin/bash

find . -type f -name "*.text" -exec bash -c 'mv "$0" "${0%.txt}.sh"' {} \;
