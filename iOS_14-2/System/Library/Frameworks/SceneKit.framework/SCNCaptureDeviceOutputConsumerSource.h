/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>
#import <libobjc.A.dylib/SCNCaptureDeviceOutputConsumer.h>

@protocol MTLTexture;
@class NSString;

@interface SCNCaptureDeviceOutputConsumerSource : SCNTextureSource <SCNCaptureDeviceOutputConsumer> {

	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _pixelBuffer;
	id<MTLTexture> _mtlTexture;
	BOOL _containsAlpha;
	BOOL _isFront;
	unsigned long long _width;
	unsigned long long _height;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 fromDevice:(id)arg2 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 fromDevice:(id)arg2 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
-(void)discardVideoData;
-(BOOL)containsAlpha;
@end

