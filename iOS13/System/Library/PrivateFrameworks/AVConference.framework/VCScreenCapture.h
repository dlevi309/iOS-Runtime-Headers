/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoCapture.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>

@class NSDictionary;

@interface VCScreenCapture : VCVideoCapture <VideoCaptureProtocol> {

	id _weakCapture;
	NSDictionary* _options;
	OpaqueFigVirtualDisplaySessionRef _session;
	OpaqueVTImageRotationSessionRef _rotationSession;
	CVPixelBufferPoolRef _rotationBufferPool;
	CVPixelBufferPoolRef _resizeBufferPool;
	OpaqueVTPixelTransferSessionRef _resizeTransferSession;
	BOOL _shouldResizeInitialized;
	BOOL _shouldResize;
	opaque_pthread_mutex_t _screenCaptureLock;
	BOOL _isPreviewing;
	BOOL _isCapturing;
	int _captureWidth;
	int _captureHeight;
	int _captureFramerate;

}
-(void)dealloc;
-(int)startPreview;
-(int)stop:(BOOL)arg1 ;
-(BOOL)isPreviewRunning;
-(int)setFrameRate:(int)arg1 ;
-(void)callbackWithEventString:(id)arg1 ;
-(int)_startCapture;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(int)setCameraWithUID:(id)arg1 ;
-(id)getCameraUID;
-(BOOL)isFrontCamera;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3 ;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2 ;
-(void)capturedScreen:(opaqueCMSampleBufferRef)arg1 sourceRect:(CGRect)arg2 desRect:(CGRect)arg3 transform:(unsigned)arg4 ;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 clientPID:(int)arg5 error:(int*)arg6 ;
@end

