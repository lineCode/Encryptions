# Encryptions Libraray Makefile

all: common Encryptions

.PHONY: common Encryptions

common:
	$(MAKE) -C common

Encryptions:
	$(MAKE) -C Encryptions

clean:
	rm -f common/*.o Encryptions/*.o