systemd─┬─ModemManager───2*[{ModemManager}]
        ├─NetworkManager─┬─dhclient
        │                └─2*[{NetworkManager}]
        ├─accounts-daemon───2*[{accounts-daemon}]
        ├─acpid
        ├─avahi-daemon───avahi-daemon
        ├─bluetoothd
        ├─boltd───2*[{boltd}]
        ├─colord───2*[{colord}]
        ├─cron
        ├─cups-browsed───2*[{cups-browsed}]
        ├─cupsd
        ├─dbus-daemon
        ├─firefox─┬─4*[Web Content───33*[{Web Content}]]
        │         ├─Web Content───40*[{Web Content}]
        │         ├─Web Content───36*[{Web Content}]
        │         ├─Web Content───34*[{Web Content}]
        │         ├─WebExtensions───30*[{WebExtensions}]
        │         └─78*[{firefox}]
        ├─fwupd───4*[{fwupd}]
        ├─gdm3─┬─gdm-session-wor─┬─gdm-wayland-ses─┬─gnome-session-b─┬─gnome-sh+
        │      │                 │                 │                 ├─gsd-a11y+
        │      │                 │                 │                 ├─gsd-clip+
        │      │                 │                 │                 ├─gsd-colo+
        │      │                 │                 │                 ├─gsd-date+
        │      │                 │                 │                 ├─gsd-hous+
        │      │                 │                 │                 ├─gsd-keyb+
        │      │                 │                 │                 ├─gsd-medi+
        │      │                 │                 │                 ├─gsd-mous+
        │      │                 │                 │                 ├─gsd-powe+
        │      │                 │                 │                 ├─gsd-prin+
        │      │                 │                 │                 ├─gsd-rfki+
        │      │                 │                 │                 ├─gsd-scre+
        │      │                 │                 │                 ├─gsd-shar+
        │      │                 │                 │                 ├─gsd-smar+
        │      │                 │                 │                 ├─gsd-soun+
        │      │                 │                 │                 ├─gsd-waco+
        │      │                 │                 │                 ├─gsd-xset+
        │      │                 │                 │                 └─3*[{gnom+
        │      │                 │                 └─2*[{gdm-wayland-ses}]
        │      │                 └─2*[{gdm-session-wor}]
        │      ├─gdm-session-wor─┬─gdm-session-wor───2*[{gdm-session-wor}]
        │      │                 ├─gdm-x-session─┬─Xorg───16*[{Xorg}]
        │      │                 │               ├─gnome-session-b─┬─deja-dup-m+
        │      │                 │               │                 ├─gnome-shel+
        │      │                 │               │                 ├─gnome-soft+
        │      │                 │               │                 ├─gsd-a11y-s+
        │      │                 │               │                 ├─gsd-clipbo+
        │      │                 │               │                 ├─gsd-color─+++
        │      │                 │               │                 ├─gsd-dateti+
        │      │                 │               │                 ├─gsd-disk-u+
        │      │                 │               │                 ├─gsd-housek+
        │      │                 │               │                 ├─gsd-keyboa+
        │      │                 │               │                 ├─gsd-media-+
        │      │                 │               │                 ├─gsd-mouse─+++
        │      │                 │               │                 ├─gsd-power─+++
        │      │                 │               │                 ├─gsd-print-+
        │      │                 │               │                 ├─gsd-rfkill+++
        │      │                 │               │                 ├─gsd-screen+
        │      │                 │               │                 ├─gsd-sharin+
        │      │                 │               │                 ├─gsd-smartc+
        │      │                 │               │                 ├─gsd-sound─+++
        │      │                 │               │                 ├─gsd-wacom─+++
        │      │                 │               │                 ├─gsd-xsetti+
        │      │                 │               │                 ├─nautilus-d+
        │      │                 │               │                 ├─ssh-agent
        │      │                 │               │                 ├─update-not+
        │      │                 │               │                 └─3*[{gnome-+
        │      │                 │               └─2*[{gdm-x-session}]
        │      │                 └─2*[{gdm-session-wor}]
        │      └─2*[{gdm3}]
        ├─gnome-keyring-d───3*[{gnome-keyring-d}]
        ├─gsd-printer───2*[{gsd-printer}]
        ├─ibus-x11───3*[{ibus-x11}]
        ├─ibus-x11───2*[{ibus-x11}]
        ├─irqbalance───{irqbalance}
        ├─2*[kerneloops]
        ├─networkd-dispat───{networkd-dispat}
        ├─packagekitd───2*[{packagekitd}]
        ├─polkitd───2*[{polkitd}]
        ├─pulseaudio───2*[{pulseaudio}]
        ├─rsyslogd───3*[{rsyslogd}]
        ├─rtkit-daemon───2*[{rtkit-daemon}]
        ├─snapd───24*[{snapd}]
        ├─systemd─┬─(sd-pam)
        │         ├─at-spi-bus-laun─┬─dbus-daemon
        │         │                 └─3*[{at-spi-bus-laun}]
        │         ├─at-spi2-registr───2*[{at-spi2-registr}]
        │         ├─dbus-daemon
        │         ├─ibus-portal───2*[{ibus-portal}]
        │         ├─pulseaudio───2*[{pulseaudio}]
        │         └─xdg-permission-───2*[{xdg-permission-}]
        ├─systemd─┬─(sd-pam)
        │         ├─at-spi-bus-laun─┬─dbus-daemon
        │         │                 └─3*[{at-spi-bus-laun}]
        │         ├─at-spi2-registr───2*[{at-spi2-registr}]
        │         ├─dbus-daemon
        │         ├─dconf-service───2*[{dconf-service}]
        │         ├─evince───4*[{evince}]
        │         ├─evinced───2*[{evinced}]
        │         ├─evolution-addre─┬─evolution-addre───5*[{evolution-addre}]
        │         │                 └─4*[{evolution-addre}]
        │         ├─evolution-calen─┬─evolution-calen───8*[{evolution-calen}]
        │         │                 └─4*[{evolution-calen}]
        │         ├─evolution-sourc───3*[{evolution-sourc}]
        │         ├─gnome-shell-cal───5*[{gnome-shell-cal}]
        │         ├─gnome-terminal-─┬─bash───pstree
        │         │                 ├─bash─┬─cat
        │         │                 │      └─tee
        │         │                 └─3*[{gnome-terminal-}]
        │         ├─goa-daemon───3*[{goa-daemon}]
        │         ├─goa-identity-se───3*[{goa-identity-se}]
        │         ├─gvfs-afc-volume───3*[{gvfs-afc-volume}]
        │         ├─gvfs-goa-volume───2*[{gvfs-goa-volume}]
        │         ├─gvfs-gphoto2-vo───2*[{gvfs-gphoto2-vo}]
        │         ├─gvfs-mtp-volume───2*[{gvfs-mtp-volume}]
        │         ├─gvfs-udisks2-vo───2*[{gvfs-udisks2-vo}]
        │         ├─gvfsd─┬─gvfsd-dnssd───2*[{gvfsd-dnssd}]
        │         │       ├─gvfsd-network───3*[{gvfsd-network}]
        │         │       ├─gvfsd-trash───2*[{gvfsd-trash}]
        │         │       └─2*[{gvfsd}]
        │         ├─gvfsd-fuse───5*[{gvfsd-fuse}]
        │         ├─gvfsd-metadata───2*[{gvfsd-metadata}]
        │         ├─ibus-portal───2*[{ibus-portal}]
        │         ├─nautilus───11*[{nautilus}]
        │         ├─xdg-permission-───2*[{xdg-permission-}]
        │         ├─zeitgeist-daemo───2*[{zeitgeist-daemo}]
        │         └─zeitgeist-fts───2*[{zeitgeist-fts}]
        ├─systemd-journal
        ├─systemd-logind
        ├─systemd-resolve
        ├─systemd-timesyn───{systemd-timesyn}
        ├─systemd-udevd
        ├─thermald───{thermald}
        ├─udisksd───4*[{udisksd}]
        ├─unattended-upgr───{unattended-upgr}
        ├─upowerd───2*[{upowerd}]
        ├─whoopsie───2*[{whoopsie}]
        └─wpa_supplicant
