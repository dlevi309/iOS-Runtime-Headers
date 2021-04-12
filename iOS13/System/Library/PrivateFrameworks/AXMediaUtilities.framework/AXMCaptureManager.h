/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue;
@class AVCaptureDevice, AVCaptureSession, AVCaptureDeviceInput, AVCaptureVideoDataOutput, NSObject, NSHashTable, _AXMCaptureManagerDetectionEngine, NSString;

@interface AXMCaptureManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {

	AVCaptureDevice* _captureDevice;
	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _captureDeviceInput;
	AVCaptureVideoDataOutput* _videoDataOutput;
	NSObject*<OS_dispatch_queue> _videoFrameReceiveQueue;
	long long _activeScenario;
	NSHashTable* _videoFrameObservers;
	_AXMCaptureManagerDetectionEngine* _detectionEngine;
	NSHashTable* _featureDetectionObservers;
	os_unfair_lock_s _observerLock;
	long long _deviceOrientation;

}

@property (nonatomic,readonly) AVCaptureSession * session; 
@property (nonatomic,readonly) long long activeScenario;                //@synthesize activeScenario=_activeScenario - In the implementation block
@property (assign,nonatomic) long long deviceOrientation;               //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)captureSessionReport:(id)arg1 ;
-(id)init;
-(AVCaptureSession *)session;
-(long long)deviceOrientation;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(id)initWithCaptureSession:(id)arg1 ;
-(id)idealCaptureSettingsForScenario:(long long)arg1 ;
-(BOOL)_configureSessionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)startSessionIfNeeded;
-(void)stopSession;
-(BOOL)configureForScenario:(long long)arg1 error:(id*)arg2 ;
-(void)addVideoFrameObserver:(id)arg1 ;
-(void)removeVideoFrameObserver:(id)arg1 ;
-(void)addFeatureDetectionObserver:(id)arg1 ;
-(void)removeFeatureDetectionObserver:(id)arg1 ;
-(long long)activeScenario;
-(int)_minimumAcceptableFramerateForScenario:(long long)arg1 ;
-(int)_maximumAcceptableFramerateForScenario:(long long)arg1 ;
-(int)_minimumAcceptableResolutionForScenario:(long long)arg1 ;
-(int)_maximumAcceptableResolutionForScenario:(long long)arg1 ;
-(unsigned)_pixelFormatForScenario:(long long)arg1 ;
-(id)_filteredDevicesAndFormatsForScenario:(long long)arg1 ;
-(id)_preferredFormatForFormats:(id)arg1 ;
-(void)printAllVideoDevices;
-(void)beginLiveDetectionWithOptions:(id)arg1 ;
-(void)endLiveDetection;
@end

