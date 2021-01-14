/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

