# ArkCanICraftX
Made November 2023 for fun/to solve a problem in a game called: ARK: Survival Evolved.

The problem: In ARK, the amount of items you can have in an inventory to craft is limited. In a "fabricator" you can only have 70 stacks of items. Each stack can only contain a limited amount of said item. The problem is that some blueprints to craft items are simply too expensive to be crafted in a fabricator (too many stacks required to craft). This program simply solves a basic math problem of this stack issue. Was made in about 30 minutes because this issue was bothering me. My only experience before this was two computer science classes.

The solution: Knows all resource stack sizes (in Resources.h) and can use these to calculate if a blueprint can be crafted or not. Prompts user for the inventory to be crafted in (fabricator or smithy), then asks for resources and their respective costs. Outputs true/false if the item can be crafted.
