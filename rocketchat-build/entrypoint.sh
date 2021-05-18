#!/bin/bash
test -z "$*" && /bin/bash || exec "$@"