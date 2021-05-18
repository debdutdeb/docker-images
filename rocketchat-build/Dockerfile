FROM ubuntu:20.04

COPY entrypoint.sh /

RUN apt update && \
	DEBIAN_FRONTEND=noninteractive apt install --no-install-recommends -y \
	sudo g++ build-essential git curl ca-certificates python3-minimal && \
	useradd -mG sudo -s /bin/bash rocketbuild && \
	echo '%rocketbuild ALL=(ALL) NOPASSWD: ALL' > /etc/sudoers.d/rocketbuild && \
	chmod a+x /entrypoint.sh

USER rocketbuild
WORKDIR /home/rocketbuild

RUN curl https://install.meteor.com/ -s | sh -x

ENTRYPOINT [ "/entrypoint.sh" ]