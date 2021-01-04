FROM ubuntu:latest

RUN apt update && apt install -y \
        build-essential \
        git \
        libfmt-dev

WORKDIR /root/clip

COPY . .

CMD ["make"]
