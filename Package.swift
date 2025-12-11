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
            url: "https://github.com/IgorShevtshenko/split-api/releases/download//splitapi.xcframework.zip",
            checksum: "12e4a2dd9a50e464ea65d4519c9f546f44a6ce2462a6ce5c8bbbb552db6e7145"
        ),
    ]
)