# nxxm : get started

Welcome in the nxxm getting started project !

Take a look at [.nxxm/deps](.nxxm/deps) to see how we added js-bind and Boost headers distribution to the build : 

```js
{
  "nxxm/js-bind" : { "@" : "v2.0.1" }
  , "platform" : ["Boost::+boost"]
}
```

## Look there are no build recipes, it will build by conventions.

```
├── .nxxm
│   └── deps
├── src
│   ├── app.html
│   ├── command-line-app.cpp
│   └── getting_started
│       ├── print_boost_version.cpp
│       └── print_boost_version.hpp
└── tests
    ├── unit_test_one.cpp
    └── unit_test_two.cpp
```


## Compile
* **WebAssembly with C++17 support:** `nxxm . `

### Compiling for another platform
If you want to compile for another platform, you simply can do the following : 

  * `nxxm . -t wasm-cxx17` : all included, works out of the box.
  * `nxxm . -t gcc-7-cxx17` : GCC 7 must be installed on your host machine.
  * `nxxm . -t clang-cxx17` : Clang must be installed on your host machine.
  * `nxxm . -t vs-15-2017-win64-cxx17` : VS 2017 must be installed on your host machine.

## Running
Open it with your browser (firefox doesn't need but other requires you to serve the file with a webserver to allow WebAssembly execution) : 
* `firefox build/wasm-cxx17/bin/src/app.html`

Run the command line app with our bundled NodeJS :
* `nxxm . --test src/command-line-app`

## You are ready to focus on C++
If you want to learn more join us on  [nxxm.github.io](https://nxxm.github.io)   or [read the docs](https://nxxm-docs.readthedocs.io/en/latest/index.html).


## Thanks
Thanks for testing nxxm, we hope you enjoy it as we do. 🤗

-nxxm project
