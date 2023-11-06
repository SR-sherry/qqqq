FROM ubuntu:20.04
MAINTAINER Terry1234

RUN apt-get update && \
    DEBAIN_FRONTEND=noninteractive apt-get install -qy xinetd

RUN useradd -m bof_revenge
RUN chown -R root:root /home/bof_revenge
RUN chmod -R 755 /home/bof_revenge

CMD ["/usr/sbin/xinetd", "-dontfork"]
