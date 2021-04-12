/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/ARSessionDelegate.h>

@protocol JTARKitFrameDelegate, OS_dispatch_queue;
@class ARSession, ARFaceTrackingConfiguration, JTCustomImageSensor, CMMotionManager, ARMotionSensor, ARDeviceOrientationSensor, AVCaptureSession, AVCaptureDevice, NSObject, NSString;

@interface JTARKitCameraSessionController : NSObject <ARSessionDelegate> {

	id<JTARKitFrameDelegate> _frameDelegate;
	ARSession* _arSession;
	ARFaceTrackingConfiguration* _faceTrackingConfiguration;
	JTCustomImageSensor* _customImageSensor;
	CMMotionManager* _motionManager;
	ARMotionSensor* _motionSensor;
	ARDeviceOrientationSensor* _orientationSensor;
	AVCaptureSession* _underlyingAVCaptureSession;
	AVCaptureDevice* _underlyingAVCaptureDevice;
	NSObject*<OS_dispatch_queue> _arSessionDelegateQueue;

}

@property (nonatomic,retain) ARSession * arSession;                                                //@synthesize arSession=_arSession - In the implementation block
@property (nonatomic,retain) ARFaceTrackingConfiguration * faceTrackingConfiguration;              //@synthesize faceTrackingConfiguration=_faceTrackingConfiguration - In the implementation block
@property (nonatomic,retain) JTCustomImageSensor * customImageSensor;                              //@synthesize customImageSensor=_customImageSensor - In the implementation block
@property (nonatomic,retain) CMMotionManager * motionManager;                                      //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) ARMotionSensor * motionSensor;                                        //@synthesize motionSensor=_motionSensor - In the implementation block
@property (nonatomic,retain) ARDeviceOrientationSensor * orientationSensor;                        //@synthesize orientationSensor=_orientationSensor - In the implementation block
@property (nonatomic,retain) AVCaptureSession * underlyingAVCaptureSession;                        //@synthesize underlyingAVCaptureSession=_underlyingAVCaptureSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * underlyingAVCaptureDevice;                          //@synthesize underlyingAVCaptureDevice=_underlyingAVCaptureDevice - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> arSessionDelegateQueue;                  //@synthesize arSessionDelegateQueue=_arSessionDelegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<JTARKitFrameDelegate> frameDelegate;                        //@synthesize frameDelegate=_frameDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setFrameDelegate:(id<JTARKitFrameDelegate>)arg1 ;
-(id<JTARKitFrameDelegate>)frameDelegate;
-(CMMotionManager *)motionManager;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(ARSession *)arSession;
-(void)processExternalSensorData:(id)arg1 ;
-(void)provideSensorFrameSet:(id)arg1 trackedFacesMetadata:(id)arg2 faceObjectsMetadata:(id)arg3 ;
-(id)initWithAVCaptureSession:(id)arg1 captureDevice:(id)arg2 arSessionDelegateQueue:(id)arg3 ;
-(void)startARSession;
-(void)setUnderlyingAVCaptureSession:(AVCaptureSession *)arg1 ;
-(void)setUnderlyingAVCaptureDevice:(AVCaptureDevice *)arg1 ;
-(BOOL)JT_setupARSession:(id*)arg1 ;
-(void)JT_resetARSession;
-(ARFaceTrackingConfiguration *)faceTrackingConfiguration;
-(JTCustomImageSensor *)customImageSensor;
-(AVCaptureDevice *)underlyingAVCaptureDevice;
-(AVCaptureSession *)underlyingAVCaptureSession;
-(void)setArSession:(ARSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)arSessionDelegateQueue;
-(void)setCustomImageSensor:(JTCustomImageSensor *)arg1 ;
-(void)setMotionSensor:(ARMotionSensor *)arg1 ;
-(void)setOrientationSensor:(ARDeviceOrientationSensor *)arg1 ;
-(void)setFaceTrackingConfiguration:(ARFaceTrackingConfiguration *)arg1 ;
-(ARMotionSensor *)motionSensor;
-(ARDeviceOrientationSensor *)orientationSensor;
-(void)setArSessionDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

