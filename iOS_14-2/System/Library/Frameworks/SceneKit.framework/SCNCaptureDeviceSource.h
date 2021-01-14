/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol MTLTexture;
@class AVCaptureDevice, AVCaptureSession, NSString;

@interface SCNCaptureDeviceSource : SCNTextureSource <AVCaptureVideoDataOutputSampleBufferDelegate> {

	AVCaptureDevice* _captureDevice;
	AVCaptureSession* _captureSession;
	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _pixelBuffer;
	id<MTLTexture> _mtlTexture;
	BOOL _isFront;
	unsigned long long _width;
	unsigned long long _height;

}

@property (nonatomic,retain) AVCaptureDevice * captureDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVCaptureDevice *)captureDevice;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)dealloc;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
-(void)discardVideoData;
@end

