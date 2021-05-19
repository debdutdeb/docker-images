FROM ubuntu:20.04

LABEL maintainer="Debdut Chakraborty"

COPY entrypoint.sh /

RUN apt update && \
	DEBIAN_FRONTEND=noninteractive apt install --no-install-recommends -y \
	sudo \
	g++ \
	build-essential \
	git \
	curl \
	ca-certificates \
	python3 && \
	useradd -mG sudo -s /bin/bash meteorjs && \
	echo '%meteorjs ALL=(ALL) NOPASSWD: ALL' > /etc/sudoers.d/meteorjs && \
	chmod a+x /entrypoint.sh

USER meteorjs
WORKDIR /home/meteorjs

RUN curl https://install.meteor.com/ -s | sh -x

VOLUME [ "/home/meteorjs/.meteor/packages" ]

ENTRYPOINT [ "/entrypoint.sh" ]