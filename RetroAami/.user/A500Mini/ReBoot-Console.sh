#!/bin/ash

cd /
sync
exit
killall -9 retroarch
echo 3 > /proc/sys/vm/drop_caches
sync
killall -9 amiberry
sync
sleep 3
killall -4 *
reboot
