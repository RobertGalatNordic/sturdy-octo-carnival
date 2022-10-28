FROM ubuntu:22.04

ARG UNAME=vscode
ARG UNAME_PASSWORD=pass

RUN useradd -ms /bin/bash $UNAME 
RUN usermod -aG sudo $UNAME
RUN usermod -aG dialout $UNAME

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get upgrade -y; apt-get install --no-install-recommends -y wget python3-pip git cmake ninja-build \
  make gcc gcc-multilib g++-multilib clangd ssh nano bash-completion sudo gpg ruby lcov screen uncrustify libfftw3-dev

RUN echo 'export PATH=$PATH:/home/'"$UNAME"'/.local/bin' >> /home/$UNAME/.bashrc

RUN echo "$UNAME:$UNAME_PASSWORD" | chpasswd 
USER $UNAME
RUN mkdir -p /home/$UNAME/work

# add your commands below