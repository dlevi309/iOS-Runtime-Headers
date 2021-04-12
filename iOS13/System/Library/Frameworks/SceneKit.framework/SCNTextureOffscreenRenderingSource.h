/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource {

	BOOL _usesIOSurface;
	CGSize _framebufferSize;
	C3DFramebufferRef _framebuffer;

}
-(void)_bindFramebuffer:(C3DEngineContextRef)arg1 ;
-(void)_unbindFramebuffer:(C3DEngineContextRef)arg1 ;
-(void)_buildMipmaps:(C3DEngineContextRef)arg1 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(C3DTextureRef)__prepareFramebufferWithSize:(CGSize)arg1 withEngineContext:(C3DEngineContextRef)arg2 textureSampler:(_C3DTextureSampler*)arg3 needsStencil:(BOOL)arg4 ;
-(1)textureSize;
-(void)_createFramebufferWithEngineContext:(C3DEngineContextRef)arg1 size:(CGSize)arg2 ;
@end

