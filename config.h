/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar    = 1;    /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy     = 1;    /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered  = 1;    /* -c option; centers dmenu on screen */
static int min_width = 700;  /* minimum width when centered */
static const char *fonts[] = {
	"FiraCode Nerd Font:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm]          = { "#9CCFD8", "#1F1D2E" },
	[SchemeSel]           = { "#21202E", "#9CCFD8" },
	[SchemeSelHighlight]  = { "#E02090", "#9CCFD8" },
	[SchemeNormHighlight] = { "#F6C177", "#1F1D2E" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines          = 18;
/* -h option; minimum height of a menu line */
static unsigned int lineheight     = 25;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
