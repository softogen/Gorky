# Gorky

This is the library to support Behavior Driven Development ([BDD][]) using [Gherkin][] language.

This is an initial version. No any valid content was created yet. Some infrastructure work is in progress now.

To build the source file the 3rd party packages are required. The [Conan][] package manager is used. To configure packages you can do:

```cmd
conan install . --build=missing --output-folder=out/build --profile=x64-release
```

[BDD]: https://docs.cucumber.io/docs/bdd/
[Gherkin]: https://docs.cucumber.io/docs/gherkin/reference/
[Conan]: https://docs.conan.io/2.0/index.html
