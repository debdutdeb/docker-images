FROM alpine:latest AS builder

WORKDIR /
COPY stop.c .

RUN apk add --no-cache gcc libc-dev && \
    gcc -o stop stop.c

FROM alpine:latest

WORKDIR /
COPY --from=builder /stop .

ENTRYPOINT [ "./stop" ]