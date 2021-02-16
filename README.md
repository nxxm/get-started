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

  * `nxxm . -t wasm-cxx17` : all included, works out of the box, generates webassembly builds.
  * `nxxm . -t linux` : all included, builds a linux binary with clang 11.
  * `nxxm . -t windows` : all included, builds a windows binary with clang 11.
  * `nxxm . -t macos` : all included, builds a macos binary with clang 11.

## Running
Open it with your browser  : 
* `nxxm run npm install --global http-server && nxxm run http-server .`
* google-chrome [http://127.0.0.1:8080/build/wasm-cxx17/bin/src/app.html](http://127.0.0.1:8080/build/wasm-cxx17/bin/src/app.html)


Run the command line app with our bundled NodeJS :
* `nxxm . --test src/command-line-app`

## You are ready to focus on C++
If you want to learn more join us on  [nxxm.github.io](https://nxxm.github.io)   or [read the docs](https://nxxm-docs.readthedocs.io/en/latest/index.html).


## Thanks
Thanks for testing nxxm, we hope you enjoy it as we do. 🤗

-nxxm project
