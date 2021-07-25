uniform sampler2D texture;
uniform vec2 viewportSize;

void main() {
	vec2 uv = gl_FragCoord.xy / viewportSize;
	gl_FragColor = vec4(uv.x, uv.y, 1.0, 1.0);
}