## Pandory for the A500 Mini, by @emuchicken and @dajoho - https://pg3d-hax.uk/discord

# WHAT IS PANDORY

Pandory is "sideloaded" firmware for the A500 mini which gives you full access to the machine and allows you to run native programs that enable many new game emulators, such as RetroArch. It comes in the form of a WHDLOAD package and exploits a hidden-feature of the A500 amiberry emulator to run native code. It runs completely from USB stick and is 100% removable.


# INSTALL

Copy the `Pandory` and `THEA500` folders to a FAT32-formatted USB stick. You can use the program "Rufus" to do this. If you already have a THEA500 folder, such as one from the fantastic Aminimiga project, you don't need to copy ours. To uninstall, just delete the `Pandory` folder.


# USAGE

Insert your USB, select it from the A500 menu, choose the Pandory folder and start Pandory. You should be greeted with the RetroArch menu.


# INSTALLING ROMS

If you want to add roms, put them on your USB stick in a subfolder of `Pandory/.user/roms/` on your USB stick. In order for them to become visible in the RetroArch menu, use the RetroArch settings menu to refresh your playlists, or to add a new playlist. We have pre-set up many playlists already, but you can also add your own. Pandory contains several thousand screenshots from almost any game you wish to add. If you name your roms according to the libretro naming scheme (see http://thumbnails.libretro.com/), the thumbnails should automatically appear.


# BIOS FILES

Some games require BIOS files. RetroArch will tell you what they are called. If needed, copy any required files to `Pandory/.user/.config/retroarch/system`.  Pandory automatically copies the embedded A500-Amiga Kickstart files to this folder when you first start, so installing Amiga BIOS files is not necessary.


# RETROARCH SHORTCUTS

To quit a game, hold start and select.
To modify settings while a game is running, or to remap controls, hold start. For some N64 games you will need to map the D-PAD to Controller Y+/Y- and X+/X- manually.


# WHERE IS EVERYTHING ON THE A500?

Since RetroArch is a linux application, the paths to all the files are in linux format on the A500. Here are some useful locations that you might need in the RetroArch menu:

USB-Stick: `/mnt`
Pandory-Roms: `/mnt/Pandory/.user/roms/`
RetroArch-Settings: `/mnt/Pandory/.user/.config/retroarch`
RetroArch-Themes: `/tmp/pandory/share/retroarch/assets`
RetroArch-Cores: `/tmp/pandory/share/retroarch/cores`
RetroArch-Thumbnails: `/tmp/pandory/share/retroarch/cores`
Linux Binaries: `/tmp/pandory/bin`


# HACKING

As the USB stick has to be in FAT32 format, and FAT32 has performance problems when working with many thousands of files, we distribute Pandory as a virtual filesystem. This is the `.pandory` file within the Pandory folder. It is a linux ext2 disk image and contains all of the pandory programs, libraries, retroarch assets, cores and retroarch thumbnails. The `.pandory` file is mounted in the folder `/tmp/pandory` on the A500. If you wish to edit it, you can use an installation of Linux, such as Manjaro Gnome, right click the `.pandory` file and open it with Disk-Image-Mounter. It is also possible to mount the filesystem with the following commands:  `mkdir /tmp/pandory && mount -o loop .pandory /tmp/pandory`.


# AUTOSTART

It is possible to autostart Pandory, but we will be testing this first and enabling the feature in a future release.
