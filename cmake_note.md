# environment variables

## PROJECT_SOURCE_DIR
- Top level source directory for the current project.
- This is the source directory of the most recent `project()` command.

--- 
# some cmd
## EXECUTABLE_OUTPUT_PATH
```bash
#设置可执行文件的输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/exec)
```

## LIBRARY_OUTPUT_PATH
```bash
#设置库文件的输出目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/lib)
```