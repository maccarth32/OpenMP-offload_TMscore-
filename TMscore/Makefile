CC  = nvc
CXX = nvc++
FC  = nvfortran

CFLAGS    =-fast -mp=gpu -gpu=cc70 -Minfo=accel -Minfo=mp
CXXFLAGS  =-fast -mp=gpu -gpu=cc70 -Minfo=accel -Minfo=mp
FFLAGS    =-fast -mp=gpu -gpu=cc70 -Minfo=accel -Minfo=mp

LIBS      =-Wl,-rpath=$(OLCF_NVHPC_ROOT)/compilers/lib \
           -Wl,-rpath=$(OLCF_NVHPC_ROOT)/math_libs/lib64 -lm

COMPILER = nvhpc

TMscore.Fortran : TMscore.f
	$(FC) $(FFLAGS) $(LIBS) $< -o ${@}.${COMPILER}.exe
	rm -f *.mod

clean:
	rm -f *.o *.mod *.exe
