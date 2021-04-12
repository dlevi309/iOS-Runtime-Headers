/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTextureSource : NSObject {

	id _mtlTextureCache;
	id _glTextureCache;
	 _size;

}
-(void)dealloc;
-(void)setSize:;
-(double)nextFrameTime;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(_C3DRendererContext*)rendererContextForTextureSourceWithEngineContext:(C3DEngineContextRef)arg1 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(C3DTextureRef)_textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(id)glTextureCache;
-(void)setGlTextureCache:(id)arg1 ;
-(BOOL)supportsMetal;
-(id)MTLTextureCache;
-(void)setMTLTextureCache:(id)arg1 ;
-(BOOL)prefersGL3;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(1)textureSize;
@end

