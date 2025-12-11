// swift-tools-version:6.0
import PackageDescription

let package = Package(
    name: "SplitApi",
    platforms: [.iOS(.v17)],
    products: [
        .library(
            name: "SplitApi",
            targets: ["SplitApi"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "SplitApi",
            url: "https://github.com/IgorShevtshenko/split-api/releases/download/1.2.0/splitapi.xcframework.zip",
            checksum: "805ff347f97c7e50406070c67b7e4e3346acc3138fd3a15d34123e9deb576387"
        ),
    ]
)