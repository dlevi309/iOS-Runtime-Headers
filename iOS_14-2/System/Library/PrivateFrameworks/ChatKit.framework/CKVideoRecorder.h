/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OS_dispatch_queue, CKVideoRecorderDelegate;
@class AVCaptureDevice, NSObject, AVCaptureVideoPreviewLayer, NSURL, AVCaptureSession, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, NSString;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {

	long long _currentDevice;
	BOOL _previousStatusBarHidden;
	AVCaptureDevice* _frontFacingCamera;
	AVCaptureDevice* _rearFacingCamera;
	NSObject*<OS_dispatch_queue> _avCaptureSessionDispatchQueue;
	BOOL _canceled;
	AVCaptureVideoPreviewLayer* _captureVideoPreviewLayer;
	id<CKVideoRecorderDelegate> _delegate;
	NSURL* _outputFileURL;
	AVCaptureSession* _session;
	AVCaptureDeviceInput* _rearVideoInput;
	AVCaptureDeviceInput* _frontVideoInput;
	AVCaptureDeviceInput* _audioInput;
	AVCaptureMovieFileOutput* _videoOutput;
	AVCaptureStillImageOutput* _stillImageOutput;

}

@property (nonatomic,retain) AVCaptureSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * rearVideoInput;                              //@synthesize rearVideoInput=_rearVideoInput - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * frontVideoInput;                             //@synthesize frontVideoInput=_frontVideoInput - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * audioInput;                                  //@synthesize audioInput=_audioInput - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * videoOutput;                             //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,retain) AVCaptureStillImageOutput * stillImageOutput;                       //@synthesize stillImageOutput=_stillImageOutput - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                                      //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer;              //@synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer - In the implementation block
@property (assign,nonatomic) long long cameraDevice; 
@property (assign,nonatomic,__weak) id<CKVideoRecorderDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                                //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanceled:(BOOL)arg1 ;
-(AVCaptureStillImageOutput *)stillImageOutput;
-(AVCaptureMovieFileOutput *)videoOutput;
-(id)init;
-(id<CKVideoRecorderDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canceled;
-(AVCaptureSession *)session;
-(AVCaptureDeviceInput *)audioInput;
-(void)setCaptureVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(id)_configureFrontVideoInput;
-(id)_configureRearVideoInput;
-(void)setStillImageOutput:(AVCaptureStillImageOutput *)arg1 ;
-(AVCaptureVideoPreviewLayer *)captureVideoPreviewLayer;
-(id)audioDevice;
-(void)setAudioInput:(AVCaptureDeviceInput *)arg1 ;
-(NSURL *)outputFileURL;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(void)setupCamera:(id)arg1 ;
-(id)_cameraWithPosition:(long long)arg1 ;
-(id)frontFacingCamera;
-(void)setFrontVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(id)rearFacingCamera;
-(void)setRearVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(AVCaptureDeviceInput *)frontVideoInput;
-(AVCaptureDeviceInput *)rearVideoInput;
-(void)setDelegate:(id<CKVideoRecorderDelegate>)arg1 ;
-(void)takePicture;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(BOOL)startVideoCapture;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(long long)cameraDevice;
-(void)setVideoOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(void)loadView;
-(void)stopVideoCapture;
-(void)cancel;
-(void)dealloc;
-(void)setCameraDevice:(long long)arg1 ;
@end

