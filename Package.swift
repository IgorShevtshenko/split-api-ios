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
             path: "./splitapi.xcframework.zip"
        ),
    ]
)