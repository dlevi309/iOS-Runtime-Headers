/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTextureSource : NSObject {

	id _mtlTextureCache;
	id _glTextureCache;
	 _size;

}
-(void)setSize:;
-(double)nextFrameTime;
-(void)dealloc;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(BOOL)shouldFlip;
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

