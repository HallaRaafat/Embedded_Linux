# Crosstool-ng ARM

1. after install all dependencies in AVR crosstool-ng Task
2. setup environment 

```
  ./bootstrap

```

![](README.assets/2.png)

3. check all dependencies 

```
  ./configure --enable-local

```

![](README.assets/3.png)

4. Generate Make file 

```
make
```

5. Grep all the supported arm arch supported by crosstool

```
 ./ct-ng list-samples | grep arm

```

![](README.assets/4.png)

6. Configure the mc

```
 ./ct-ng arm-cortexa9_neon-linux-gnueabihf

```

![](README.assets/5.png)

7. Configure in the menuconfig 

```
 ./ct-ng menuconfig
```

![](README.assets/men1.png)

choose by *space on keyboard*

- Save Intermediate steps
-  Debug Crosstool-NG
- Interactive shell on failed commands 

![](README.assets/men2.png)

then to increase the number of parallel jobs depends on your pc  

![](README.assets/men3.png)

choose musl lib 

![](README.assets/men4.png)

choose strace 

8. Build 

```
  ./ct-ng build

```

![](README.assets/6.png)

![](README.assets/armfinal.png)
