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
            url: "https://github.com/IgorShevtshenko/split-api/releases/download/1.4.0/splitapi.xcframework.zip",
            checksum: "fcbe03658d2e52d45f7fded1be2f8ea6233dd2e6baf8704bb58de07768c20107"
        ),
    ]
)