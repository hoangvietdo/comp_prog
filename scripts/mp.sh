#!/bin/bash

mkdir $@

for dir in $@; do
  cp ~/Documents/comp_prog/template/template.cpp "$dir/$dir".cpp;
done

echo "Finished making template for $@ problem"

