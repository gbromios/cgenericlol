all:
	gcc generic.c -o gg.bat -DSCANTYPE=$(type) -DSCANFRMT=$(frmt)
