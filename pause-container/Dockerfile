FROM alpine:latest AS builder

WORKDIR /
COPY pause.c .
RUN apk add --no-cache gcc libc-dev && \
    gcc -o pause pause.c

FROM alpine:latest

WORKDIR /
COPY --from=builder /pause .

ENTRYPOINT [ "./pause" ]
