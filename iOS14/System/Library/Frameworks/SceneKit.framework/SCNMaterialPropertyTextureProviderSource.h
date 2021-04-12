/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>
#import <libobjc.A.dylib/SCNMaterialPropertyTextureProviderHelper.h>

@protocol MTLTexture, SCNMaterialPropertyTextureProvider;
@class NSString;

@interface SCNMaterialPropertyTextureProviderSource : SCNTextureSource <SCNMaterialPropertyTextureProviderHelper> {

	id<MTLTexture> _texture;
	C3DEngineContextRef _engineContext;
	id<SCNMaterialPropertyTextureProvider> _textureProvider;

}

@property (nonatomic,retain) id<SCNMaterialPropertyTextureProvider> textureProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)cachedTextureWithURL:(id)arg1 token:(id*)arg2 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)setTextureProvider:(id<SCNMaterialPropertyTextureProvider>)arg1 ;
-(id<SCNMaterialPropertyTextureProvider>)textureProvider;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
@end

