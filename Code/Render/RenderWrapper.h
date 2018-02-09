// Copyright (C) 2017-2018 Ilya Chernetsov. All rights reserved. Contacts: <chernecoff@gmail.com>
// License: https://github.com/afrostalin/CryVideoPlayer/blob/master/LICENSE

#pragma once

class CVideoFrame;

class CRenderWrapper
{
public:
	CRenderWrapper();
	~CRenderWrapper();
public:
	void         Create2DVideoTextures();
	double       RenderFrameToMainWindow(CVideoFrame* pFrame);
	void         Release2DVideoTextures();
public:
	int          CreateTextureForTextureVideo(int width, int height, const char* name);
	void         UpdateTextureForTextureVideo(CVideoFrame* pFrame, int textureID);
private:
	void         Draw2dImage(ITexture* pTex);
private:
	int          m_2DTextureID;
};