all:
	make -C ./mandatory

clean:
	make -C ./mandatory clean

clean-bonus:
	make -C ./bonus clean

fclean:
	make -C ./mandatory fclean

bonus:
	make -C ./bonus

fclean-bonus:
	make -C ./bonus fclean

re:
	make -C ./mandatory re

re-bonus:
	make -C ./bonus re

.PHONY: all clean clean-bonus fclean fclean-bonus re re-bonus bonus
