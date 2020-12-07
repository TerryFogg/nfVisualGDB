


## Clone Chibios and checkout 20.3.x



1. git checkout stable_20.3.x
2. Extract lwip in place from nfVisualGDB\ExternalRepositories\ChibiOS\ext\lwip.7z
3. 


## Add a Git submodule to your main project

Create a windows command window at the top level of the project.
From the prompt
1. Add STM32H7 source

> git submodule add https://github.com/STMicroelectronics/STM32CubeH7.git ExternalRepositories/STM32CubeH7

###### When adding a Git submodule, your submodule will be staged. As a consequence, you will need to commit your submodule
>git commit -m "Added the submodule to the project."
 
> git checkout  v1.8.0

2. Add STM32F7 Source
3. Add STM32F0 Source
> 
git clone 