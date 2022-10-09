#!/bin/sh
killall -9 manhattan
killall -9 amiberry
# killall -9 *
sync

# Transfer  Kickstarts
if [[ ! -f /mnt/RetroAami/.user/.config/retroarch/system/kick33180.A500 ]]
then
    cp /usr/share/amiberry/kickstarts/* /mnt/RetroAami/.user/.config/retroarch/system/ &
fi

cd /mnt/RetroAami/.user/RetroArch/
export HOME=/mnt/RetroAami/.user
export DEFAULT=/mnt/RetroAami/.user/.config/retroarch/default_configs/ret1103.cfg
/mnt/RetroAami/.user/retroarch_1.10.3 -c /mnt/RetroAami/.user/.config/retroarch/ret1103.cfg
