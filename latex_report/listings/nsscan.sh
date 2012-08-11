#!/bin/bash

ips=`cat $1 | grep "open port" | awk '{ print $6 }' | sort | uniq`

for i in $ips 
do
  nslookup $i 172.16.19.1 >> tmp 
done

cat tmp | grep name | sort | uniq > $1_names.txt

rm -f tmp
