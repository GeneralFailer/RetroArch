/* Need to duplicate these to work around broken stuff on Android.
 * Must enforce alpha = 1.0 or 32-bit games can potentially go black. */
static const char *stock_vertex_modern =
   "attribute vec2 TexCoord;\n"
   "attribute vec2 VertexCoord;\n"
   "attribute vec4 Color;\n"
   "uniform mat4 MVPMatrix;\n"
   "varying vec2 tex_coord;\n"
   "void main() {\n"
   "   gl_Position = MVPMatrix * vec4(VertexCoord, 0.0, 1.0);\n"
   "   tex_coord = TexCoord;\n"
   "}";
