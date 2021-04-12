/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@protocol OS_dispatch_queue, BKUIVideoCaptureSesssionDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, NSObject;

@interface BKUIPearlVideoCaptureSession : NSObject {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	AVCaptureVideoPreviewLayer* _previewLayer;
	unsigned long long _captureSessionRestarts;
	BOOL _captureSessionInterrupted;
	NSObject*<OS_dispatch_queue> _captureQueue;
	id<BKUIVideoCaptureSesssionDelegate> _delegate;
	double _additionalPreviewScalingAllowedByCameraFormat;

}

@property (assign,nonatomic,__weak) id<BKUIVideoCaptureSesssionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                           //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) double additionalPreviewScalingAllowedByCameraFormat;              //@synthesize additionalPreviewScalingAllowedByCameraFormat=_additionalPreviewScalingAllowedByCameraFormat - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_frontCamera;
-(id)init;
-(id<BKUIVideoCaptureSesssionDelegate>)delegate;
-(void)setDelegate:(id<BKUIVideoCaptureSesssionDelegate>)arg1 ;
-(void)startCapture;
-(void)dealloc;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)endCapture;
-(void)_captureSessionStarted:(id)arg1 ;
-(void)_captureSessionStopped:(id)arg1 ;
-(void)_captureSessionInterrupted:(id)arg1 ;
-(BOOL)_synchronizedCaptureSessionInterrupted;
-(double)additionalPreviewScalingAllowedByCameraFormat;
@end

