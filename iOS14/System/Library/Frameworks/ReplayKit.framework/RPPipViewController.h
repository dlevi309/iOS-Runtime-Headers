/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/UIViewController.h>

@class AVCaptureSession, AVCaptureDevice, AVCaptureDeviceInput;

@interface RPPipViewController : UIViewController {

	long long _cameraPosition;
	AVCaptureSession* _pipSession;
	AVCaptureDevice* _videoDevice;
	AVCaptureDeviceInput* _videoInput;
	long long _initialOrientation;
	long long _previousOrientation;
	double _previousOrientationWidth;
	double _previousOrientationHeight;

}

@property (nonatomic,retain) AVCaptureSession * pipSession;                  //@synthesize pipSession=_pipSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * videoDevice;                  //@synthesize videoDevice=_videoDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * videoInput;              //@synthesize videoInput=_videoInput - In the implementation block
@property (assign,nonatomic) long long initialOrientation;                   //@synthesize initialOrientation=_initialOrientation - In the implementation block
@property (assign,nonatomic) long long previousOrientation;                  //@synthesize previousOrientation=_previousOrientation - In the implementation block
@property (assign,nonatomic) double previousOrientationWidth;                //@synthesize previousOrientationWidth=_previousOrientationWidth - In the implementation block
@property (assign,nonatomic) double previousOrientationHeight;               //@synthesize previousOrientationHeight=_previousOrientationHeight - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)cameraPosition;
-(AVCaptureDeviceInput *)videoInput;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPreviousOrientation:(long long)arg1 ;
-(long long)previousOrientation;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(AVCaptureDevice *)videoDevice;
-(long long)initialOrientation;
-(void)setInitialOrientation:(long long)arg1 ;
-(void)setVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(void)startPipSession;
-(void)stopPipSession;
-(id)initWithOrientation:(long long)arg1 position:(long long)arg2 ;
-(id)cameraWithPosition:(long long)arg1 ;
-(void)setPipSession:(AVCaptureSession *)arg1 ;
-(AVCaptureSession *)pipSession;
-(void)setVideoDevice:(AVCaptureDevice *)arg1 ;
-(id)_pipView;
-(void)setPreviousOrientationWidth:(double)arg1 ;
-(void)setPreviousOrientationHeight:(double)arg1 ;
-(void)_updateViewGeometry;
-(void)setUpPipSession;
-(long long)_captureVideoOrientationForUIDeviceOrientation:(long long)arg1 ;
-(void)_deviceOrientationDidChange;
-(double)previousOrientationWidth;
-(double)previousOrientationHeight;
@end

