# Setup jupyter for c



## Work with c in jupyter with jupyter-c-kernel

To work with c in jupyter install [jupyter-c-kernel](https://github.com/brendan-rius/jupyter-c-kernel) with pipenv: 

```
PIPENV_VENV_IN_PROJECT=1
pipenv install jupyter
pipenv install jupyter-c-kernel
pipenv run jupyter lab
```



## Work with c in Jupyter without the jupyter-c-kernel

You can work with c in Jupyter without the jupyter-c-kernel, see [this youtube]( [How to Code in C with a Jupyter Notebook - YouTube](https://www.youtube.com/watch?v=cWdU9unrlm0) ) video for instruction.


Example of the generated files when not using c-kernel:

```
.
├── c_program
├── c_program.c
└── c_program.dSYM
    └── Contents
```

So you want to [git-ignore the extension-less file](https://stackoverflow.com/questions/19023550/how-do-i-add-files-without-dots-in-them-all-extension-less-files-to-the-gitign) (`c_program`, the executable)

```
*
!/**/
!*.*
```

Note that the above should be placed at the beginning of the `.gitignore` file.

I am not sure what to do with the [`.dSYM` file](https://stackoverflow.com/questions/3656391/whats-the-dsym-and-how-to-use-it-ios-sdk) , I'll ignore it for now:

```bash
*.dSYM
```

