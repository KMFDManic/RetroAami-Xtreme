#!/bin/ash

# A500 Mini PowerOff/ Shutdown Fix By MadFranko008

cd /
sync
killall -4 *
sleep 3
/usr/bin/nohup poweroff -nf
poweroff
