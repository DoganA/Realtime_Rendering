#version 150

/*
 * Simple Cel Shader
 * (C)Dogan Alkan
 *
 * This vertex shader expects a position and normal vector per vertex,
 * and model-view, projection and normal matrices.
 *
 * It transforms the position and normal to eye coordinates and
 * passes them to the fragment shader; it also transforms the vertex
 * position to clip coordinates for the needs of the pipeline.
 *
 */

/*
 * As base we take the phong shader of Hartmut Schirmacher, mentioned above
 * Then we implement our toon/cel shader after with the help of these sources:
 *
 * https://en.wikipedia.org/wiki/Cel_shading
 * https://www.youtube.com/watch?v=dzItGHyteng
 *
 */


// transformation matrices as provided by Cinder
uniform mat4 projectionMatrix;
uniform mat4 modelViewMatrix;
uniform mat3 normalMatrix;

// in: position and normal vector in model coordinates (_MC)
in vec3 position_MC;
in vec3 normal_MC;

// position + normal vector in eye coordinates (_EC)
out vec4 position_EC;
out vec3 normal_EC;


void main(void) {

    // position to eye coordinates
    position_EC = modelViewMatrix * vec4(position_MC,1);

    // normal to eye coordinates
    normal_EC = normalMatrix * normal_MC;

    // position to clip coordinates
    gl_Position = projectionMatrix * position_EC;


}
