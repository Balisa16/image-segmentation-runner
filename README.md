# AOI ONNX Segmenter (C++)

High-performance semantic segmentation pipeline implemented in C++ using OpenCV DNN. This project is designed for industrial computer vision workloads such as Automated Optical Inspection (AOI), where performance and reliability are critical.

---

## Background

This project is a C++ reimplementation of a system originally developed in C#.

The initial version relied on OpenCV through a C# wrapper (e.g., OpenCvSharp or EmguCV). While functionally correct, it introduced several limitations:

- Performance overhead due to managed-to-native interop
- Increased latency during inference and image processing
- Limited control over memory and execution
- Reduced suitability for real-time or high-throughput systems

To address these constraints, the system was rewritten in native C++ using OpenCV DNN. This approach provides:

- Lower inference latency
- Better memory control
- More predictable performance
- Improved suitability for production and industrial environments

---

## Features

- ONNX model inference using OpenCV DNN
- Multi-class segmentation with overlay visualization
- Pixel-based class detection and filtering
- Configurable runtime parameters:
  - Input image size
  - Alpha blending factor
  - Minimum pixel threshold
- Library-based architecture with clean separation of concerns
- Structured error handling
- No UI dependencies in the core library

---


## Requirements

- C++17 or C++20
- OpenCV (with DNN module enabled)
- CMake 3.16 or higher

---