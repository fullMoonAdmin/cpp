.PHONY: clean All

All:
	@echo "----------Building project:[ flowControl - Debug ]----------"
	@cd "flowControl" && "$(MAKE)" -f  "flowControl.mk"
clean:
	@echo "----------Cleaning project:[ flowControl - Debug ]----------"
	@cd "flowControl" && "$(MAKE)" -f  "flowControl.mk" clean
