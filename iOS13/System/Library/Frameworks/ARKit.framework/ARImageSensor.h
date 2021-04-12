/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/AVCaptureDataOutputSynchronizerDelegate.h>
#import <libobjc.A.dylib/AVCaptureCameraCalibrationDataOutputDelegate.h>
#import <libobjc.A.dylib/AVCapturePhotoCaptureDelegate.h>
#import <ARKit/ARSensor.h>

@protocol ARSensorDelegate, OS_dispatch_queue;
@class AVCaptureVisionDataOutput, NSArray, AVCameraCalibrationData, ARImageSensorSettings, AVCaptureDevice, AVCaptureSession, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureConnection, AVCapturePhotoOutput, AVCaptureDataOutputSynchronizer, NSObject, NSMutableArray, AVCaptureCameraCalibrationDataOutput, ARBufferPopulationMonitor, NSString;

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, AVCaptureCameraCalibrationDataOutputDelegate, AVCapturePhotoCaptureDelegate, ARSensor> {

	AVCaptureVisionDataOutput* _visionDataOutput;
	NSArray* _captureDeviceKeysObserved;
	AVCameraCalibrationData* _cameraCalibrationData;
	BOOL _runningSingleShotAutoFocus;
	float _defaultLensPosition;
	ARImageSensorSettings* _settings;
	id<ARSensorDelegate> _delegate;
	AVCaptureDevice* _captureDevice;
	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _videoInput;
	AVCaptureVideoDataOutput* _videoOutput;
	AVCaptureConnection* _videoConnection;
	AVCapturePhotoOutput* _photoOutput;
	AVCaptureConnection* _calibrationConnection;
	AVCaptureConnection* _visionDataConnection;
	AVCaptureDataOutputSynchronizer* _outputSynchronizer;
	NSObject*<OS_dispatch_queue> _captureQueue;
	unsigned long long _powerUsage;
	long long _captureFramesPerSecond;
	NSMutableArray* _connections;
	AVCaptureCameraCalibrationDataOutput* _calibrationOutput;
	ARBufferPopulationMonitor* _bufferPopulationMonitor;
	SCD_Struct_AR1 _extrinsicsToWideCamera;
	SCD_Struct_AR1 _extrinsicsToDepthSensor;

}

@property (assign) float defaultLensPosition;                                                         //@synthesize defaultLensPosition=_defaultLensPosition - In the implementation block
@property (assign) long long captureFramesPerSecond;                                                  //@synthesize captureFramesPerSecond=_captureFramesPerSecond - In the implementation block
@property (assign) BOOL runningSingleShotAutoFocus;                                                   //@synthesize runningSingleShotAutoFocus=_runningSingleShotAutoFocus - In the implementation block
@property (nonatomic,readonly) AVCaptureCameraCalibrationDataOutput * calibrationOutput;              //@synthesize calibrationOutput=_calibrationOutput - In the implementation block
@property (nonatomic,readonly) ARImageSensorSettings * mutableSettings; 
@property (nonatomic,retain) AVCaptureDeviceInput * videoInput;                                       //@synthesize videoInput=_videoInput - In the implementation block
@property (nonatomic,retain) AVCaptureConnection * videoConnection;                                   //@synthesize videoConnection=_videoConnection - In the implementation block
@property (nonatomic,retain) ARBufferPopulationMonitor * bufferPopulationMonitor;                     //@synthesize bufferPopulationMonitor=_bufferPopulationMonitor - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) ARImageSensorSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) AVCaptureDevice * captureDevice;                                       //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) AVCaptureSession * captureSession;                                     //@synthesize captureSession=_captureSession - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoDataOutput * videoOutput;                                //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,readonly) AVCapturePhotoOutput * photoOutput;                                    //@synthesize photoOutput=_photoOutput - In the implementation block
@property (nonatomic,readonly) AVCaptureConnection * calibrationConnection;                           //@synthesize calibrationConnection=_calibrationConnection - In the implementation block
@property (nonatomic,readonly) AVCaptureConnection * visionDataConnection;                            //@synthesize visionDataConnection=_visionDataConnection - In the implementation block
@property (nonatomic,readonly) NSArray * outputsForSynchronizer; 
@property (nonatomic,readonly) AVCaptureDataOutputSynchronizer * outputSynchronizer;                  //@synthesize outputSynchronizer=_outputSynchronizer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> captureQueue;                             //@synthesize captureQueue=_captureQueue - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 extrinsicsToWideCamera;                                   //@synthesize extrinsicsToWideCamera=_extrinsicsToWideCamera - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 extrinsicsToDepthSensor;                                  //@synthesize extrinsicsToDepthSensor=_extrinsicsToDepthSensor - In the implementation block
@property (assign,nonatomic) unsigned long long powerUsage;                                           //@synthesize powerUsage=_powerUsage - In the implementation block
@property (retain) NSMutableArray * connections;                                                      //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerSignPostForImageData:(id)arg1 ;
+(float)defaultLensPosition;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(ARImageSensorSettings *)settings;
-(NSMutableArray *)connections;
-(void)setConnections:(NSMutableArray *)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)cameraCalibrationDataOutput:(id)arg1 didOutputCameraCalibrationData:(id)arg2 timestamp:(SCD_Struct_AR57)arg3 connection:(id)arg4 ;
-(void)cameraCalibrationDataOutput:(id)arg1 didDropCameraCalibrationDataAtTimestamp:(SCD_Struct_AR57)arg2 connection:(id)arg3 reason:(long long)arg4 ;
-(void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2 ;
-(ARImageSensorSettings *)mutableSettings;
-(AVCaptureSession *)captureSession;
-(AVCaptureDevice *)captureDevice;
-(AVCaptureVideoDataOutput *)videoOutput;
-(AVCaptureDeviceInput *)videoInput;
-(void)triggerVisionDataBurst;
-(id)logPrefix;
-(void)reconfigure:(id)arg1 ;
-(id)_setActiveFormat;
-(id)configureCaptureSession;
-(void)setVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(AVCaptureConnection *)videoConnection;
-(void)setVideoConnection:(AVCaptureConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)captureQueue;
-(BOOL)canReconfigure:(id)arg1 ;
-(void)enableSensor:(BOOL)arg1 ;
-(long long)captureFramesPerSecond;
-(ARBufferPopulationMonitor *)bufferPopulationMonitor;
-(unsigned long long)providedDataTypes;
-(id)prepareToStart;
-(SCD_Struct_AR1)extrinsicsToDepthSensor;
-(void)setCaptureFramesPerSecond:(long long)arg1 ;
-(void)setExtrinsicsToDepthSensor:(SCD_Struct_AR1)arg1 ;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3 ;
-(void)configureCaptureDevice;
-(AVCaptureDataOutputSynchronizer *)outputSynchronizer;
-(NSArray *)outputsForSynchronizer;
-(void)forceUpdatePowerUsage:(unsigned long long)arg1 ;
-(unsigned long long)powerUsage;
-(void)setBufferPopulationMonitor:(ARBufferPopulationMonitor *)arg1 ;
-(void)setExtrinsicsToWideCamera:(SCD_Struct_AR1)arg1 ;
-(float)defaultLensPosition;
-(void)setDefaultLensPosition:(float)arg1 ;
-(void)_configureCameraFocusForDevice:(id)arg1 ;
-(void)_configureFrameRateForDevice:(id)arg1 ;
-(id)configureCaptureSessionCalibration;
-(id)_configureVisionDataOutputForSession:(id)arg1 ;
-(void)_configureCameraExposureForDevice:(id)arg1 ;
-(void)_configureCameraWhiteBalanceForDevice:(id)arg1 ;
-(void)_configureImageControlModeForDevice:(id)arg1 ;
-(void)configureGeometricDistortionCorrectionForDevice:(id)arg1 ;
-(void)_configureFrameRateForDevice:(id)arg1 frameRate:(double)arg2 ;
-(void)setRunningSingleShotAutoFocus:(BOOL)arg1 ;
-(void)enableAutoFocusForDevice:(id)arg1 ;
-(void)_dispatchImageData:(id)arg1 ;
-(BOOL)runningSingleShotAutoFocus;
-(void)updateCaptureDeviceFrameRate:(double)arg1 ;
-(AVCapturePhotoOutput *)photoOutput;
-(AVCaptureConnection *)calibrationConnection;
-(AVCaptureConnection *)visionDataConnection;
-(SCD_Struct_AR1)extrinsicsToWideCamera;
-(AVCaptureCameraCalibrationDataOutput *)calibrationOutput;
@end

