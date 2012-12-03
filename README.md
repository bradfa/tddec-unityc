tddec-unityc
############

An example repo using [unityc][1] unit testing.  Unityc is adapted from the
[Unity][2] unit testing software.

[1]:https://github.com/bradfa/unityc
[2]:https://github.com/ThrowTheSwitch/Unity

You're welcome to base your use of unityc off this example.  Simply make a git
submodule of the unityc repo

```
git submodule add git://github.com/bradfa/unityc.git
git commit -m "Add unityc submodule"
```

and then modify the Makefile to suit your build configuration.

In this example, all the .c modules go in `/src`, all .h files go in `/include`,
all tests go in `/test`, and built executables end up in `/output`.  The
`main.c` file is for the target binary build.  It should *not* go in `/src`.

Create your tests, minimum 3 files for simplicity, write some modules to fulfill
the tests, then run `make`!

Created by Andrew Bradford.  Using examples from [Test Driven Development for
Embedded C][3] by James W Grenning.  This product includes software developed
for the Unity Project, by Mike Karlesky, Mark VanderVoord, and Greg Williams and
other contributors.

[3]:http://pragprog.com/book/jgade/test-driven-development-for-embedded-c
