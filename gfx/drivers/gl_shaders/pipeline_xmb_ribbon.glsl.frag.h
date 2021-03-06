static const char *stock_fragment_xmb =
   "#ifdef GL_ES\n"
   "precision mediump float;\n"
   "#endif\n"
   "uniform float time;\n"
   "varying vec3 fragVertexEc;\n"
   "vec3 up = vec3(0, 0, 1);\n"
   "void main()\n"
   "{\n"
   "  vec3 X = dFdx(fragVertexEc);\n"
   "  vec3 Y = dFdy(fragVertexEc);\n"
   "  vec3 normal=normalize(cross(X,Y));\n"
   "  float c = (1.0 - dot(normal, up));\n"
   "  c = (1.0 - cos(c*c))/3.0;\n"
   "  gl_FragColor = vec4(1.0, 1.0, 1.0, c);\n"
   "}\n";
