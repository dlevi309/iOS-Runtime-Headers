/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@protocol BKUIVideoCaptureSesssionDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer;

@interface BKUIPearlVideoCaptureSession : NSObject {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	AVCaptureVideoPreviewLayer* _previewLayer;
	unsigned long long _captureSessionRestarts;
	BOOL _captureSessionInterrupted;
	id<BKUIVideoCaptureSesssionDelegate> _delegate;
	double _additionalPreviewScalingAllowedByCameraFormat;

}

@property (assign,nonatomic,__weak) id<BKUIVideoCaptureSesssionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                           //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) double additionalPreviewScalingAllowedByCameraFormat;              //@synthesize additionalPreviewScalingAllowedByCameraFormat=_additionalPreviewScalingAllowedByCameraFormat - In the implementation block
-(id)init;
-(void)dealloc;
-(id<BKUIVideoCaptureSesssionDelegate>)delegate;
-(void)setDelegate:(id<BKUIVideoCaptureSesssionDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startCapture;
-(id)_frontCamera;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)endCapture;
-(void)_captureSessionStarted:(id)arg1 ;
-(void)_captureSessionStopped:(id)arg1 ;
-(void)_captureSessionInterrupted:(id)arg1 ;
-(double)additionalPreviewScalingAllowedByCameraFormat;
@end

