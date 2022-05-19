FROM ubuntu:18.04

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update; \
    apt-get install -y \
    wget \
    xz-utils \
    libusb-dev \
    libfontconfig1 \
    libxft-dev \
    libxrender1 \
    libxi6 \
    libxext6; \
    apt-get clean; \
    rm -rf /var/lib/apt/lists

ADD dependencies/arduino-teensy-1.8.1.tar.gz /opt/
ADD dependencies/build.sh /build.sh

WORKDIR /source
VOLUME ["/source", "/output"]

CMD ["/build.sh"]
