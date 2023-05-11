FROM debian:buster-slim

RUN apt-get update && \
    apt-get install -y gcc

COPY meminfo.c /usr/src/

WORKDIR /usr/src

RUN gcc -o meminfo meminfo.c

CMD ["./meminfo"]
