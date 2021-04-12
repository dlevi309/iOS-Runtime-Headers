/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoCapture.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>

@protocol CannedVideoFrameFeeder;
@interface CannedVideoCapture : VCVideoCapture <VideoCaptureProtocol> {

	CannedVideoCapturePrivate* _pimpl;
	id<CannedVideoFrameFeeder> _frameFeeder;

}

@property (nonatomic,readonly) CannedVideoCapturePrivate* pimpl;                  //@synthesize pimpl=_pimpl - In the implementation block
@property (nonatomic,retain) id<CannedVideoFrameFeeder> frameFeeder;              //@synthesize frameFeeder=_frameFeeder - In the implementation block
+(int)cannedVideoTypeForPath:(id)arg1 ;
+(int)createPixelBufferPool:(_CVPixelBufferPool*)arg1 withWidth:(int)arg2 height:(int)arg3 ;
-(void)dealloc;
-(CannedVideoCapturePrivate*)pimpl;
-(int)startPreview;
-(int)stop:(BOOL)arg1 ;
-(BOOL)isPreviewRunning;
-(int)setFrameRate:(int)arg1 ;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(int)setCameraWithUID:(id)arg1 ;
-(id)getCameraUID;
-(BOOL)isFrontCamera;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3 ;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2 ;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5 video:(id)arg6 error:(int*)arg7 ;
-(void)stopThreads;
-(int)startThreads;
-(id<CannedVideoFrameFeeder>)frameFeeder;
-(void)setFrameFeeder:(id<CannedVideoFrameFeeder>)arg1 ;
@end

