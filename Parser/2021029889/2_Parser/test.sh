#!/bin/bash

for var in 1 2 3 4
do
	echo "[PARSER] >> TEST CASE ${var}";
	rm -rf ./example/test.${var}.result; ./cminus_parser ./example/test.${var}.txt >> ./example/test.${var}.result;
	if [ "`diff ./example/test.${var}.result ./example/result.${var}.txt`" = "2c2
< C-MINUS COMPILATION: ./example/test.${var}.txt
---
> C-MINUS COMPILATION: ./test.${var}.txt" ]; then
		echo "OK...";
	else
		echo "NO...";
	fi
	echo "";
	rm -rf ./example/test.${var}.result; 
done
