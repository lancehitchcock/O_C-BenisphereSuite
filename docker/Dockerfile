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

RUN wget https://downloads.arduino.cc/arduino-1.8.1-linux64.tar.xz -O /opt/install-1.8.1.tar.xz; \
    cd /opt; \
    tar -xf install-1.8.1.tar.xz; \
    rm install-1.8.1.tar.xz

ADD dependencies/teensy-1.3.5.tar.gz /opt/
ADD dependencies/build.sh /build.sh

WORKDIR /source
VOLUME ["/source", "/output"]

CMD ["/build.sh"]
