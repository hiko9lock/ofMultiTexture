varying vec2 texCoord;
uniform sampler2DRect tex0, tex1;

void main()
{
	if (texCoord.x < 512.0/2.0)
		gl_FragColor= texture2DRect(tex0,texCoord);
	else
		gl_FragColor= texture2DRect(tex1, texCoord);
}

