.PHONY: clean All

All:
	@echo "----------Building project:[ template-copy - Debug ]----------"
	@cd "template-copy" && "$(MAKE)" -f  "template-copy.mk"
clean:
	@echo "----------Cleaning project:[ template-copy - Debug ]----------"
	@cd "template-copy" && "$(MAKE)" -f  "template-copy.mk" clean
