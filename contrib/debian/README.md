
Debian
====================
This directory contains files used to package CRYSHd/CRYSH-qt
for Debian-based Linux systems. If you compile CRYSHd/CRYSH-qt yourself, there are some useful files here.

## pivx: URI support ##


CRYSH-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install CRYSH-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your CRYSH-qt binary to `/usr/bin`
and the `../../share/pixmaps/pivx128.png` to `/usr/share/pixmaps`

CRYSH-qt.protocol (KDE)

