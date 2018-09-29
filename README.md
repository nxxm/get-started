# nxxm : get started

Welcome in the nxxm getting started project !

Take a look at [.nxxm/deps](.nxxm/deps) to see how we added nlohmann::json and Boost headers distribution to the build : 

```js
{
  "nxxm/js-bind" : { "@" : "v2.0.1" }
  , "platform" : ["Boost::+boost"]
}
```

## Look there are no build recipes, it will build by conventions.

```
├── README.md
├── src
│   ├── app.cpp
│   └── getting_started
│       ├── print_boost_version.cpp
│       └── print_boost_version.hpp
└── tests
    ├── unit_test_one.cpp
    └── unit_test_two.cpp
```


## Compile

* **WebAssembly :** `nxxm . `
* **Host :** `nxxm . -t cxx17`

## Compile'n'run

* **WebAssembly :** `nxxm . --test src/app`
* **Host :** `nxxm . -t cxx17 --test src/app`

## You are ready to focus on C++
If you want to learn more join us on  [nxxm.github.io](https://nxxm.github.io)   or [read the docs](https://nxxm-docs.readthedocs.io/en/latest/index.html).

## Thanks
Thanks for testing nxxm, we hope you enjoy it as we do. 🤗

-nxxm project
