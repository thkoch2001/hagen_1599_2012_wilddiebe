#!/bin/bash

DT=`/bin/date +\%H_\%M_\%S_\%d_\%m_\%y`
LOG_FILE=scan_${DT}.log

nmap -Avv 172.16.14.0/24 > $LOG_FILE
./nsscan.sh "$LOG_FILE"
