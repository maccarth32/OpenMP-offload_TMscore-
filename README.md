# OpenMP-offload_TMscore-
TMscore is a metric  for assessing the topological similarity of protein structures. This means TMscore is used to compare whether two protein structures are similar. 
This is obtained by comparing the pdb file of a predicted protein structure to that of it's native structure from the protein data bank. 

Compiling and Running TMscore
`To compile TMscore, please locate the Makefile (or Makefile_gcc ), load the corresponding compilers (nvhpc or gcc) and make. `
`This process should generate the executable and to run, specify the .pdf files of the two protein structures to compare as arguments to the the binary.`
`i,e jsrun -n1 -a1 -c1 -g1 --smpiargs=off ./tmscore mode1.pdb model1_native.pdb`
