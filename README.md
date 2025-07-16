# Linux Kernel Module which counts number of device reads

Inspired by `chardev.c` from [The Linux Kernel Module Programming Guide](https://sysprog21.github.io/lkmpg/#hello-world).

## Usage Example

```console
$ sudo insmod counter.ko
$ sudo dmesg | tail -3
[19953.856863] In the beginning...
[19953.856870] Counter assigned major number 510.
[19953.856998] Device created on /dev/jimbob_counter
$ sudo cat /dev/jimbob_counter
I have been read 1 times.
$ sudo cat /dev/jimbob_counter
I have been read 2 times.
$ sudo cat /dev/jimbob_counter
I have been read 3 times.
$ sudo dmesg | tail -3
[19989.878026] I have been read 1 times.
[20031.240523] I have been read 2 times.
[20031.813530] I have been read 3 times.
```

## Development

### Building

```console
make
```

### Loading

```console
sudo insmod counter.ko
```

### Unloading

```console
sudo rmmod counter.ko
```
