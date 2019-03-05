#version 330 core
in vec3 ourColor;
in vec2 TexCoord;

out vec4 FragColor;

// Texture samplers
uniform sampler2D ourTexture;

void main()
{
//    gl_FragColor = texture(ourTexture, TexCoord) * vec4(ourColor, 1);
//    gl_FragColor = gl_Color;
//    gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);
    FragColor = texture(ourTexture, TexCoord) * vec4(ourColor, 1);
//    FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);
//    FragColor = vec4(1.0, 0.0, 0.0, 1.0);
//    FragColor = vec4(ourColor, 1.0);
}
