# mesh-viewer

OPenGL applications for viewing meshes

## How to build

*Windows*

Open git bash to the directory containing this repository.

```
mesh-viewer $ mkdir build
mesh-viewer $ cd build
mesh-viewer/build $ cmake -G "Visual Studio 16 2019" ..
mesh-viewer/build $ start CS312-MeshViewer.sln
```

Your solution file should contain multiple projects, such as `mesh-viewer`.
To run from the git bash command shell, 

```
mesh-viewer/build $ ../bin/Debug/mesh-viewer
```

*macOS*

Open terminal to the directory containing this repository.

```
mesh-viewer $ mkdir build
mesh-viewer $ cd build
mesh-viewer/build $ cmake ..
mesh-viewer/build $ make
```

To run each program from build, you would type

```
mesh-viewer/build $ ../bin/mesh-viewer
```

## Simple Mesh
1. **Pyramid using Triangles**

![Uploading Screen Shot 2021-05-27 at 9.33.17 PM.png…]()


2. **Adding zoom in and out Ferature and Rotation Feature** 

Formula used:
```
x = Dist * sin(Azimuth) * cos(Elevation)
y = Dist * sin(Elevation)
z = Dist * cos(Azimuth) * cos(Elevation)

```

**ZOOM IN and ZOOM OUT**

https://user-images.githubusercontent.com/60520906/119917051-b96b8200-bf33-11eb-8ba3-01884cee257c.mov

**ROTATION**

https://user-images.githubusercontent.com/60520906/119917119-e5870300-bf33-11eb-9586-54fffafc2f32.mov

## Mesh Viewer

1. **Per - Vertex shader: Zoom in and out and rotation for one mesh object **

https://user-images.githubusercontent.com/60520906/119917520-b624c600-bf34-11eb-9fdc-2a77d9d9a84d.mov

2. **Per - Vertex shader:changing models** 


https://user-images.githubusercontent.com/60520906/119918020-a8bc0b80-bf35-11eb-8ed0-8b780cecb25b.mov


## Unique feature: Per-Pixel shader

**Demo**

https://user-images.githubusercontent.com/60520906/119918046-b70a2780-bf35-11eb-9263-4fb5691a3b35.mov



