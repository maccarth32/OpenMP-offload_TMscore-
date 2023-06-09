#!/bin/bash

# Define the number of copies you want to make
num_copies=80

# Specify the source file you want to copy
source_file="originalmodel.pdb"

# Loop to create multiple copies
for ((i=1; i<=num_copies; i++)); do
  cp "$source_file" "model$i.pdb"
done

