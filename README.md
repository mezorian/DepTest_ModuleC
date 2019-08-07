# DepTest_ModuleC
Dependency Test - Submodule C

[![Build Status](https://travis-ci.org/mezorian/DepTest_ModuleC.svg?branch=master)](https://travis-ci.org/mezorian/DepTest_ModuleC)

## Requirements 

 1. Installation of google repo tool
 2. Installation of qt

## Setup / Clone & Compile 

```bash
# set variables
repoName="DepTest_ModuleC"
repoURL="https://github.com/mezorian/DepTest_ModuleC.git"
branch="master"
manifest="default.xml"

# clone this repository
git clone ${repoURL}
cd ${repoName}

# download all depency repos
repo init -u ${repoURL} -b ${branch} -m ${manifest}
repo sync

# build
source /opt/qt55/bin/qt55-env.sh
/opt/qt55/bin/qmake
make clean
make

# run
./untitled

```
