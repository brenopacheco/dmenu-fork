# Patch list


- [x] separator
    + https://tools.suckless.org/dmenu/patches/separator/dmenu-separator-5.2.patch
    + splits input with delimiter `-d <delimiter>` into text that is shown and
      text that is output upon selection. e.g: `alpha` is shown, `beta charlie` 
      is output: `echo "alpha beta charlie" | ./dmenu -d ' '`
- [x] center
    + *https://tools.suckless.org/dmenu/patches/center/dmenu-center-5.2.diff*
    + centers dmenu in the middle of the screen using `-c` flag
- [x] border
    + *https://tools.suckless.org/dmenu/patches/border/dmenu-border-20230512-0fe460d.diff*
    + adds a border around the dmenu window using `-bw 3`. pair it with #center
- [ ] listfullwidth
    + *https://tools.suckless.org/dmenu/patches/listfullwidth/dmenu-listfullwidth-5.0.diff*
    + removes left indentation from options
- [ ] fuzzymatch
    + https://tools.suckless.org/dmenu/patches/fuzzymatch/dmenu-fuzzymatch-4.9.diff
    + adds fuzzy matching through `-F` flag
- [ ] fuzzyhighlight
    + *https://tools.suckless.org/dmenu/patches/fuzzyhighlight/dmenu-fuzzyhighlight-caseinsensitive-4.9.diff*
    + makes fuzzy matches gets highlighted
- [ ] lineheight
    + *https://tools.suckless.org/dmenu/patches/line-height/dmenu-lineheight-5.2.diff*
    + adds `-h` option to specify bar height
- [x] numbers
    + *https://tools.suckless.org/dmenu/patches/numbers/dmenu-numbers-20220512-28fb3e2.diff*
    + adds count to the end of list. e.g: [4/52]
