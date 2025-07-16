# Linux Kernel Module which counts number of device reads

Inspired by `chardev.c` from [The Linux Kernel Module Programming Guide](https://sysprog21.github.io/lkmpg/#hello-world).

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
