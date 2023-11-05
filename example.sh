#!/usr/bin/env bash

rg '^Name=' /usr/share/applications/ \
		--no-heading \
		--with-filename \
		--no-line-number |
		sed 's/:Name=/;/' | ./dmenu -p Application -d ';|'
