// swift-tools-version:5.10
import PackageDescription

let package = Package(
    name: "SplitApi",
    platforms: [.iOS(.v13)],
    products: [
        .library(
            name: "SplitApi",
            targets: ["SplitApi"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "SplitApi",
            url: "https://github.com/IgorShevtshenko/split-api/releases/download/1.5.0/splitapi.xcframework.zip",
            checksum: "10387be3f2f057eec9981a2f577c30c3a86a73b9d167e1018993c6345f460e1e"
        ),
    ]
)