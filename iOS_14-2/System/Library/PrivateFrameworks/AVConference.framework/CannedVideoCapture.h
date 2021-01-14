/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoCapture.h>
#import <libobjc.A.dylib/VCVideoSource.h>

@protocol CannedVideoFrameFeeder, OS_dispatch_queue;
@class NSObject, NSString;

@interface CannedVideoCapture : VCVideoCapture <VCVideoSource> {

	CannedVideoCapturePrivate* _pimpl;
	id<CannedVideoFrameFeeder> _frameFeeder;
	NSObject*<OS_dispatch_queue> _captureSessionQueue;

}

@property (nonatomic,readonly) CannedVideoCapturePrivate* pimpl;                  //@synthesize pimpl=_pimpl - In the implementation block
@property (nonatomic,retain) id<CannedVideoFrameFeeder> frameFeeder;              //@synthesize frameFeeder=_frameFeeder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)cannedVideoTypeForPath:(id)arg1 ;
+(int)createPixelBufferPool:(_CVPixelBufferPool*)arg1 withWidth:(int)arg2 height:(int)arg3 ;
-(CannedVideoCapturePrivate*)pimpl;
-(int)stop:(BOOL)arg1 ;
-(int)setFrameRate:(int)arg1 ;
-(int)startPreview;
-(BOOL)isPreviewRunning;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(void)dealloc;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(int)configureCaptureWithToken:(VCVideoSourceToken)arg1 ;
-(BOOL)isFrontCamera;
-(int)frameCount:(BOOL)arg1 ;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2 ;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 videoSourceToken:(VCVideoSourceToken)arg5 video:(id)arg6 error:(int*)arg7 ;
-(void)stopThreads;
-(int)startThreads;
-(id<CannedVideoFrameFeeder>)frameFeeder;
-(void)setFrameFeeder:(id<CannedVideoFrameFeeder>)arg1 ;
@end

