#!/bin/bash
echo "🧠 CPU Model:"
grep 'model name' /proc/cpuinfo | uniq
echo -n "🧵 Cores: "
grep -c ^processor /proc/cpuinfo
