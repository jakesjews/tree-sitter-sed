package tree_sitter_sed_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-sed"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_sed.Language())
	if language == nil {
		t.Errorf("Error loading Sed grammar")
	}
}
