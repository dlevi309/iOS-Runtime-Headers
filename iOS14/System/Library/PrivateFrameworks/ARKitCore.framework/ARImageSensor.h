/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/AVCaptureDataOutputSynchronizerDelegate.h>
#import <libobjc.A.dylib/AVCaptureCameraCalibrationDataOutputDelegate.h>
#import <libobjc.A.dylib/AVCapturePhotoCaptureDelegate.h>
#import <ARKitCore/ARSensor.h>

@protocol ARSensorDelegate, ARImageSensorDataSource, OS_dispatch_queue;
@class AVCaptureVisionDataOutput, NSArray, AVCameraCalibrationData, NSMutableDictionary, ARImageSensorSettings, AVCaptureDevice, AVCaptureSession, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureConnection, AVCapturePhotoOutput, AVCaptureDataOutputSynchronizer, NSObject, NSMutableArray, AVCaptureCameraCalibrationDataOutput, ARBufferPopulationMonitor, NSString;

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, AVCaptureCameraCalibrationDataOutputDelegate, AVCapturePhotoCaptureDelegate, ARSensor> {

	AVCaptureVisionDataOutput* _visionDataOutput;
	NSArray* _captureDeviceKeysObserved;
	AVCameraCalibrationData* _cameraCalibrationData;
	NSMutableDictionary* _extrinsicsMap;
	BOOL _runningSingleShotAutoFocus;
	float _defaultLensPosition;
	ARImageSensorSettings* _settings;
	id<ARSensorDelegate> _delegate;
	id<ARImageSensorDataSource> _dataSource;
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
@property (assign,nonatomic,__weak) id<ARImageSensorDataSource> dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
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
@property (assign,nonatomic) unsigned long long powerUsage;                                           //@synthesize powerUsage=_powerUsage - In the implementation block
@property (retain) NSMutableArray * connections;                                                      //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerSignPostForImageData:(id)arg1 ;
+(float)defaultLensPosition;
-(void)setConnections:(NSMutableArray *)arg1 ;
-(AVCaptureDevice *)captureDevice;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVCaptureVideoDataOutput *)videoOutput;
-(void)reconfigure:(id)arg1 ;
-(id)init;
-(id<ARSensorDelegate>)delegate;
-(NSMutableArray *)connections;
-(AVCaptureDeviceInput *)videoInput;
-(void)start;
-(id<ARImageSensorDataSource>)dataSource;
-(void)triggerVisionDataBurst;
-(void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2 ;
-(void)stop;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(NSString *)description;
-(void)setDataSource:(id<ARImageSensorDataSource>)arg1 ;
-(ARImageSensorSettings *)settings;
-(AVCaptureSession *)captureSession;
-(id)logPrefix;
-(void)cameraCalibrationDataOutput:(id)arg1 didOutputCameraCalibrationData:(id)arg2 timestamp:(SCD_Struct_AR57)arg3 connection:(id)arg4 ;
-(void)cameraCalibrationDataOutput:(id)arg1 didDropCameraCalibrationDataAtTimestamp:(SCD_Struct_AR57)arg2 connection:(id)arg3 reason:(long long)arg4 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)dealloc;
-(ARImageSensorSettings *)mutableSettings;
-(void)setVideoConnection:(AVCaptureConnection *)arg1 ;
-(AVCaptureConnection *)videoConnection;
-(id)setActiveFormat;
-(id)configureCaptureSession;
-(void)configureFrameRateForDevice:(id)arg1 ;
-(void)setVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(NSObject*<OS_dispatch_queue>)captureQueue;
-(BOOL)canReconfigure:(id)arg1 ;
-(void)enableSensor:(BOOL)arg1 ;
-(long long)captureFramesPerSecond;
-(ARBufferPopulationMonitor *)bufferPopulationMonitor;
-(unsigned long long)providedDataTypes;
-(id)prepareToStart;
-(void)setCaptureFramesPerSecond:(long long)arg1 ;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3 ;
-(void)configureCaptureDevice;
-(AVCaptureDataOutputSynchronizer *)outputSynchronizer;
-(NSArray *)outputsForSynchronizer;
-(void)forceUpdatePowerUsage:(unsigned long long)arg1 ;
-(unsigned long long)powerUsage;
-(void)setBufferPopulationMonitor:(ARBufferPopulationMonitor *)arg1 ;
-(float)defaultLensPosition;
-(void)setDefaultLensPosition:(float)arg1 ;
-(void)_configureCameraFocusForDevice:(id)arg1 ;
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
-(AVCaptureCameraCalibrationDataOutput *)calibrationOutput;
@end
