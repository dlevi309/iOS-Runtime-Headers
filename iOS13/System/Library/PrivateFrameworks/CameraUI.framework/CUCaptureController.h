/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMCaptureService.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@protocol CAMPreviewLayerOverCaptureStatusDelegate, CAMStillImageCapturingVideoDelegate, CAMPanoramaChangeDelegate, CAMBurstDelegate, CAMConfigurationDelegate, CAMSuggestionDelegate, CAMAvailabilityDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMFacesDelegate, CAMMachineReadableCodeDelegate, CAMCaptureResultDelegate, CAMZoomDelegate, CAMCaptureRecoveryDelegate, CAMCaptureRunningDelegate, CAMCaptureInterruptionDelegate, OS_dispatch_queue;
@class CAMPanoramaPreviewView, CAMCaptureEngine, NSObject, CAMThumbnailGenerator, CAMStillImageCaptureRequest, CAMVideoCaptureRequest, CAMPanoramaCaptureRequest, CAMCaptureRequestIntervalometer, CAMKeyValueCoalescer, NSCountedSet, NSMutableSet, NSMutableDictionary, CAMLocationController, CAMMotionController, CAMBurstController, CAMProtectionController, CAMPowerController, CAMIrisVideoController, CAMRemoteShutterController, AVCaptureVideoPreviewLayer, NSString;

@interface CUCaptureController : NSObject <CAMCaptureService, CAMCaptureRequestIntervalometerDelegate> {

	CAMPanoramaPreviewView* _panoramaPreviewView;
	Ai _uniqueRequestIDForConfigurationChange;
	BOOL _previewDisabled;
	BOOL _capturingTimelapse;
	BOOL _flashActive;
	BOOL _torchActive;
	BOOL _HDRSuggested;
	BOOL _captureAvailable;
	BOOL _configurationAvailable;
	BOOL _flashAvailable;
	BOOL _torchAvailable;
	BOOL _rampingVideoZoom;
	BOOL __capturingPairedVideoPaused;
	BOOL __needsInitialPairedVideoUpdate;
	BOOL _failedConfigurationPreventingCapture;
	BOOL __isVideoCaptureAvailable;
	id<CAMPreviewLayerOverCaptureStatusDelegate> _previewLayerOverCaptureStatusDelegate;
	id<CAMStillImageCapturingVideoDelegate> _stillImageCapturingVideoDelegate;
	long long _lowLightStatus;
	id<CAMPanoramaChangeDelegate> _panoramaChangeDelegate;
	id<CAMBurstDelegate> _burstDelegate;
	id<CAMConfigurationDelegate> _configurationDelegate;
	id<CAMSuggestionDelegate> _suggestionDelegate;
	id<CAMAvailabilityDelegate> _availabilityDelegate;
	id<CAMFocusDelegate> _focusDelegate;
	id<CAMExposureDelegate> _exposureDelegate;
	id<CAMShallowDepthOfFieldStatusDelegate> _shallowDepthOfFieldStatusDelegate;
	id<CAMFacesDelegate> _facesDelegate;
	id<CAMMachineReadableCodeDelegate> _machineReadableCodeDelegate;
	id<CAMCaptureResultDelegate> _resultDelegate;
	id<CAMZoomDelegate> _zoomDelegate;
	id<CAMCaptureRecoveryDelegate> _recoveryDelegate;
	id<CAMCaptureRunningDelegate> _runningDelegate;
	id<CAMCaptureInterruptionDelegate> _interruptionDelegate;
	CAMCaptureEngine* __captureEngine;
	NSObject*<OS_dispatch_queue> __responseQueue;
	CAMThumbnailGenerator* __responseThumbnailGenerator;
	CAMStillImageCaptureRequest* __capturingCTMVideoRequest;
	CAMVideoCaptureRequest* __capturingVideoRequest;
	CAMVideoCaptureRequest* __pendingVideoCaptureRequest;
	CAMPanoramaCaptureRequest* __capturingPanoramaRequest;
	CAMStillImageCaptureRequest* __capturingLowLightStillImageRequest;
	CAMCaptureRequestIntervalometer* _currentBurstIntervalometer;
	CAMKeyValueCoalescer* __focusCoalescer;
	CAMKeyValueCoalescer* __exposureCoalescer;
	NSCountedSet* __numberOfInflightRequestsByType;
	long long __maximumNumberOfStillImageRequests;
	NSMutableSet* __identifiersForActiveLivePhotoVideoCaptures;
	NSMutableSet* __identifiersForActiveCTMVideoCaptures;
	NSMutableDictionary* __persistenceUUIDToSignpostID;
	unsigned long long __nextSignpostID;
	CAMLocationController* __locationController;
	CAMMotionController* __motionController;
	CAMBurstController* __burstController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMIrisVideoController* __irisVideoController;
	CAMRemoteShutterController* __remoteShutterController;

}

@property (nonatomic,readonly) CAMCaptureEngine * _captureEngine;                                                                                                                    //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _responseQueue;                                                                                                          //@synthesize _responseQueue=__responseQueue - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _responseThumbnailGenerator;                                                                                                  //@synthesize _responseThumbnailGenerator=__responseThumbnailGenerator - In the implementation block
@property (assign,setter=_setCapturingPairedVideoPaused:,getter=_isCapturingPairedVideoPaused,nonatomic) BOOL _capturingPairedVideoPaused;                                           //@synthesize _capturingPairedVideoPaused=__capturingPairedVideoPaused - In the implementation block
@property (assign,setter=_setNeedsInitialPairedVideoUpdate:,nonatomic) BOOL _needsInitialPairedVideoUpdate;                                                                          //@synthesize _needsInitialPairedVideoUpdate=__needsInitialPairedVideoUpdate - In the implementation block
@property (setter=_setCapturingCTMVideoRequest:,nonatomic,retain) CAMStillImageCaptureRequest * _capturingCTMVideoRequest;                                                           //@synthesize _capturingCTMVideoRequest=__capturingCTMVideoRequest - In the implementation block
@property (setter=_setCapturingVideoRequest:,nonatomic,retain) CAMVideoCaptureRequest * _capturingVideoRequest;                                                                      //@synthesize _capturingVideoRequest=__capturingVideoRequest - In the implementation block
@property (setter=_setPendingVideoCaptureRequest:,nonatomic,retain) CAMVideoCaptureRequest * _pendingVideoCaptureRequest;                                                            //@synthesize _pendingVideoCaptureRequest=__pendingVideoCaptureRequest - In the implementation block
@property (setter=_setCapturingPanoramaRequest:,nonatomic,retain) CAMPanoramaCaptureRequest * _capturingPanoramaRequest;                                                             //@synthesize _capturingPanoramaRequest=__capturingPanoramaRequest - In the implementation block
@property (setter=_setCapturingLowLightStillImageRequest:,nonatomic,retain) CAMStillImageCaptureRequest * _capturingLowLightStillImageRequest;                                       //@synthesize _capturingLowLightStillImageRequest=__capturingLowLightStillImageRequest - In the implementation block
@property (setter=_setCurrentBurstIntervalometer:,nonatomic,retain) CAMCaptureRequestIntervalometer * currentBurstIntervalometer;                                                    //@synthesize currentBurstIntervalometer=_currentBurstIntervalometer - In the implementation block
@property (nonatomic,readonly) CAMKeyValueCoalescer * _focusCoalescer;                                                                                                               //@synthesize _focusCoalescer=__focusCoalescer - In the implementation block
@property (nonatomic,readonly) CAMKeyValueCoalescer * _exposureCoalescer;                                                                                                            //@synthesize _exposureCoalescer=__exposureCoalescer - In the implementation block
@property (assign,getter=isRampingVideoZoom,nonatomic) BOOL rampingVideoZoom;                                                                                                        //@synthesize rampingVideoZoom=_rampingVideoZoom - In the implementation block
@property (assign,setter=_setFlashActive:,getter=isFlashActive,nonatomic) BOOL flashActive;                                                                                          //@synthesize flashActive=_flashActive - In the implementation block
@property (assign,setter=_setTorchActive:,getter=isTorchActive,nonatomic) BOOL torchActive;                                                                                          //@synthesize torchActive=_torchActive - In the implementation block
@property (assign,setter=_setHDRSuggested:,getter=isHDRSuggested,nonatomic) BOOL HDRSuggested;                                                                                       //@synthesize HDRSuggested=_HDRSuggested - In the implementation block
@property (assign,setter=_setLowLightStatus:,nonatomic) long long lowLightStatus;                                                                                                    //@synthesize lowLightStatus=_lowLightStatus - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _numberOfInflightRequestsByType;                                                                                                       //@synthesize _numberOfInflightRequestsByType=__numberOfInflightRequestsByType - In the implementation block
@property (assign,setter=_setMaximumNumberOfStillImageRequests:,nonatomic) long long _maximumNumberOfStillImageRequests;                                                             //@synthesize _maximumNumberOfStillImageRequests=__maximumNumberOfStillImageRequests - In the implementation block
@property (assign,setter=_setCaptureAvailable:,getter=isCaptureAvailable,nonatomic) BOOL captureAvailable;                                                                           //@synthesize captureAvailable=_captureAvailable - In the implementation block
@property (assign,setter=_setFailedConfigurationPreventingCapture:,getter=_isFailedConfigurationPreventingCapture,nonatomic) BOOL failedConfigurationPreventingCapture;              //@synthesize failedConfigurationPreventingCapture=_failedConfigurationPreventingCapture - In the implementation block
@property (assign,setter=_setVideoCaptureAvailable:,getter=_isVideoCaptureAvailable,nonatomic) BOOL _isVideoCaptureAvailable;                                                        //@synthesize _isVideoCaptureAvailable=__isVideoCaptureAvailable - In the implementation block
@property (assign,setter=_setConfigurationAvailable:,getter=isConfigurationAvailable,nonatomic) BOOL configurationAvailable;                                                         //@synthesize configurationAvailable=_configurationAvailable - In the implementation block
@property (assign,setter=_setFlashAvailable:,getter=isFlashAvailable,nonatomic) BOOL flashAvailable;                                                                                 //@synthesize flashAvailable=_flashAvailable - In the implementation block
@property (assign,setter=_setTorchAvailable:,getter=isTorchAvailable,nonatomic) BOOL torchAvailable;                                                                                 //@synthesize torchAvailable=_torchAvailable - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _identifiersForActiveLivePhotoVideoCaptures;                                                                                           //@synthesize _identifiersForActiveLivePhotoVideoCaptures=__identifiersForActiveLivePhotoVideoCaptures - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _identifiersForActiveCTMVideoCaptures;                                                                                                 //@synthesize _identifiersForActiveCTMVideoCaptures=__identifiersForActiveCTMVideoCaptures - In the implementation block
@property (nonatomic,readonly) BOOL _shouldResetFocusAndExposureAfterCapture; 
@property (nonatomic,readonly) NSMutableDictionary * _persistenceUUIDToSignpostID;                                                                                                   //@synthesize _persistenceUUIDToSignpostID=__persistenceUUIDToSignpostID - In the implementation block
@property (assign,setter=_setNextSignpostID:,nonatomic) unsigned long long _nextSignpostID;                                                                                          //@synthesize _nextSignpostID=__nextSignpostID - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                                                                                          //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                                              //@synthesize _motionController=__motionController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * _burstController;                                                                                                                //@synthesize _burstController=__burstController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                                                                                                      //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                                                                                //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMIrisVideoController * _irisVideoController;                                                                                                        //@synthesize _irisVideoController=__irisVideoController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * _remoteShutterController;                                                                                                //@synthesize _remoteShutterController=__remoteShutterController - In the implementation block
@property (getter=isPreviewDisabled,nonatomic,readonly) BOOL previewDisabled;                                                                                                        //@synthesize previewDisabled=_previewDisabled - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,readonly) CAMPanoramaPreviewView * panoramaPreviewView; 
@property (assign,nonatomic,__weak) id<CAMPreviewLayerOverCaptureStatusDelegate> previewLayerOverCaptureStatusDelegate;                                                              //@synthesize previewLayerOverCaptureStatusDelegate=_previewLayerOverCaptureStatusDelegate - In the implementation block
@property (getter=isCapturingStillImage,nonatomic,readonly) BOOL capturingStillImage; 
@property (assign,nonatomic,__weak) id<CAMStillImageCapturingVideoDelegate> stillImageCapturingVideoDelegate;                                                                        //@synthesize stillImageCapturingVideoDelegate=_stillImageCapturingVideoDelegate - In the implementation block
@property (getter=isCapturingLivePhotoVideo,nonatomic,readonly) BOOL capturingLivePhotoVideo; 
@property (getter=isCapturingCTMVideo,nonatomic,readonly) BOOL capturingCTMVideo; 
@property (getter=isCapturingLowLightImage,nonatomic,readonly) BOOL capturingLowLightImage; 
@property (getter=isCapturingMaximumLowLightImage,nonatomic,readonly) BOOL capturingMaximumLowLightImage; 
@property (getter=isCapturingVideo,nonatomic,readonly) BOOL capturingVideo; 
@property (getter=isCapturingStandardVideo,nonatomic,readonly) BOOL capturingStandardVideo; 
@property (getter=isCapturingPanorama,nonatomic,readonly) BOOL capturingPanorama; 
@property (assign,nonatomic,__weak) id<CAMPanoramaChangeDelegate> panoramaChangeDelegate;                                                                                            //@synthesize panoramaChangeDelegate=_panoramaChangeDelegate - In the implementation block
@property (getter=isCapturingBurst,nonatomic,readonly) BOOL capturingBurst; 
@property (nonatomic,readonly) unsigned long long currentBurstCount; 
@property (assign,nonatomic,__weak) id<CAMBurstDelegate> burstDelegate;                                                                                                              //@synthesize burstDelegate=_burstDelegate - In the implementation block
@property (assign,getter=isCapturingTimelapse,nonatomic) BOOL capturingTimelapse;                                                                                                    //@synthesize capturingTimelapse=_capturingTimelapse - In the implementation block
@property (assign,nonatomic,__weak) id<CAMConfigurationDelegate> configurationDelegate;                                                                                              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMSuggestionDelegate> suggestionDelegate;                                                                                                    //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMAvailabilityDelegate> availabilityDelegate;                                                                                                //@synthesize availabilityDelegate=_availabilityDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMFocusDelegate> focusDelegate;                                                                                                              //@synthesize focusDelegate=_focusDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMExposureDelegate> exposureDelegate;                                                                                                        //@synthesize exposureDelegate=_exposureDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMShallowDepthOfFieldStatusDelegate> shallowDepthOfFieldStatusDelegate;                                                                      //@synthesize shallowDepthOfFieldStatusDelegate=_shallowDepthOfFieldStatusDelegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowUserToChangeFocusAndExposure; 
@property (assign,nonatomic,__weak) id<CAMFacesDelegate> facesDelegate;                                                                                                              //@synthesize facesDelegate=_facesDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMMachineReadableCodeDelegate> machineReadableCodeDelegate;                                                                                  //@synthesize machineReadableCodeDelegate=_machineReadableCodeDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureResultDelegate> resultDelegate;                                                                                                     //@synthesize resultDelegate=_resultDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMZoomDelegate> zoomDelegate;                                                                                                                //@synthesize zoomDelegate=_zoomDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureRecoveryDelegate> recoveryDelegate;                                                                                                 //@synthesize recoveryDelegate=_recoveryDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureRunningDelegate> runningDelegate;                                                                                                   //@synthesize runningDelegate=_runningDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureInterruptionDelegate> interruptionDelegate;                                                                                         //@synthesize interruptionDelegate=_interruptionDelegate - In the implementation block
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)focusLensPositionCurrentSentinel;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isInterrupted;
-(BOOL)isRampingVideoZoom;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(BOOL)isFlashAvailable;
-(BOOL)isFlashActive;
-(BOOL)isTorchAvailable;
-(BOOL)isTorchActive;
-(void)_setFlashActive:(BOOL)arg1 ;
-(void)_setFlashAvailable:(BOOL)arg1 ;
-(void)_setTorchActive:(BOOL)arg1 ;
-(void)_setTorchAvailable:(BOOL)arg1 ;
-(BOOL)isCapturingStillImage;
-(id<CAMSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<CAMSuggestionDelegate>)arg1 ;
-(id<CAMZoomDelegate>)zoomDelegate;
-(void)setZoomDelegate:(id<CAMZoomDelegate>)arg1 ;
-(id<CAMConfigurationDelegate>)configurationDelegate;
-(void)setConfigurationDelegate:(id<CAMConfigurationDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)_responseQueue;
-(void)setAvailabilityDelegate:(id<CAMAvailabilityDelegate>)arg1 ;
-(id<CAMAvailabilityDelegate>)availabilityDelegate;
-(CAMPowerController *)_powerController;
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2 ;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(void)videoRequestDidStartCapturing:(id)arg1 ;
-(void)videoRequestDidStopCapturing:(id)arg1 ;
-(void)panoramaRequestDidStartCapturing:(id)arg1 ;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2 ;
-(CAMCaptureEngine *)_captureEngine;
-(void)setFacesDelegate:(id<CAMFacesDelegate>)arg1 ;
-(void)setMachineReadableCodeDelegate:(id<CAMMachineReadableCodeDelegate>)arg1 ;
-(void)setBurstDelegate:(id<CAMBurstDelegate>)arg1 ;
-(void)setRecoveryDelegate:(id<CAMCaptureRecoveryDelegate>)arg1 ;
-(void)setInterruptionDelegate:(id<CAMCaptureInterruptionDelegate>)arg1 ;
-(void)setRunningDelegate:(id<CAMCaptureRunningDelegate>)arg1 ;
-(void)setStillImageCapturingVideoDelegate:(id<CAMStillImageCapturingVideoDelegate>)arg1 ;
-(void)setPreviewLayerOverCaptureStatusDelegate:(id<CAMPreviewLayerOverCaptureStatusDelegate>)arg1 ;
-(void)setShallowDepthOfFieldStatusDelegate:(id<CAMShallowDepthOfFieldStatusDelegate>)arg1 ;
-(void)invalidateController;
-(CAMMotionController *)_motionController;
-(void)changeToPreviewFilters:(id)arg1 ;
-(CAMRemoteShutterController *)_remoteShutterController;
-(BOOL)isCapturingVideo;
-(BOOL)commitCTMCaptureWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)isHDRSuggested;
-(void)initiateCTMCaptureWithSettings:(id)arg1 ;
-(void)endCTMVideoCapture;
-(void)cancelCTMCaptureForSettings:(id)arg1 ;
-(BOOL)isCapturingBurst;
-(BOOL)captureStillImageWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCaptureAvailable;
-(CAMLocationController *)_locationController;
-(BOOL)isCapturingLowLightImage;
-(BOOL)isCapturingCTMVideo;
-(BOOL)startCapturingVideoWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopCapturingVideo;
-(BOOL)startCapturingPanoramaWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopCapturingPanoramaInterrupted:(BOOL)arg1 ;
-(BOOL)isCapturingPanorama;
-(double)_defaultZoomFactorForGraphConfiguration:(id)arg1 ;
-(void)changeToVideoZoomFactor:(double)arg1 ;
-(void)changeToPortraitAperture:(double)arg1 ;
-(void)changeToPortraitLightingEffectStrength:(double)arg1 ;
-(BOOL)isCapturingTimelapse;
-(void)registerVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg1 ;
-(BOOL)isCapturingMaximumLowLightImage;
-(BOOL)isCapturingLivePhotoVideo;
-(long long)lowLightStatus;
-(BOOL)isConfigurationAvailable;
-(void)changeToPreviewDisabled;
-(void)changeToPreviewEnabledWithConfiguration:(unsigned long long)arg1 ;
-(void)changeToAspectRatioCrop:(long long)arg1 ;
-(void)changeToTorchMode:(long long)arg1 ;
-(void)changeToVideoHDRSuspended:(BOOL)arg1 ;
-(void)startMonitoringForHDRSuggestions;
-(void)stopMonitoringForHDRSuggestions;
-(void)changeToFlashMode:(long long)arg1 ;
-(void)pauseCapturingStillImagePairedVideo;
-(void)resumeCapturingStillImagePairedVideo;
-(void)attemptToEndInterruptions;
-(void)prepareToCaptureStillImageAtSystemTime:(long long)arg1 ;
-(BOOL)startCapturingBurstWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)stopCapturingBurst;
-(void)changeToVideoRecordingCaptureOrientation:(long long)arg1 ;
-(int)changeToGraphConfiguration:(id)arg1 zoomFactor:(double)arg2 minimumExecutionTime:(double)arg3 ;
-(void)changeToPreviewConfiguration:(unsigned long long)arg1 ;
-(void)changeToLowLightMode:(long long)arg1 ;
-(void)startRampToVideoZoomFactor:(double)arg1 withDuration:(double)arg2 ;
-(void)startRampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(void)stopRampToVideoZoomFactor;
-(void)focusAtCenterForVideoRecording;
-(BOOL)isPreviewDisabled;
-(void)startCaptureSessionWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(int)applyCaptureConfiguration:(id)arg1 ;
-(void)updateRealtimeMetadataConfigurationForGraphConfiguration:(id)arg1 isCapturing:(BOOL)arg2 ;
-(void)changeToPanoramaEncodingBehavior:(long long)arg1 ;
-(void)stopCaptureSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)setPanoramaChangeDelegate:(id<CAMPanoramaChangeDelegate>)arg1 ;
-(CAMPanoramaPreviewView *)panoramaPreviewView;
-(void)changeToPanoramaDirection:(long long)arg1 ;
-(void)setCapturingTimelapse:(BOOL)arg1 ;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(CAMIrisVideoController *)_irisVideoController;
-(CAMProtectionController *)_protectionController;
-(id<CAMCaptureResultDelegate>)resultDelegate;
-(CAMBurstController *)_burstController;
-(void)stillImageRequestWillStartCapturingVideo:(id)arg1 ;
-(void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2 ;
-(void)stillImageRequest:(id)arg1 didStopCapturingLivePhotoVideoForCoordinationInfo:(id)arg2 ;
-(void)stillImageRequest:(id)arg1 didStopCapturingCTMVideoForCoordinationInfo:(id)arg2 ;
-(void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)panoramaRequest:(id)arg1 didReceiveNotification:(long long)arg2 ;
-(void)panoramaConfigurationDidChangeWithImageQueue:(CAImageQueueRef)arg1 direction:(long long)arg2 ;
-(void)metadataWasRecognized:(id)arg1 forMetadataObjectTypes:(id)arg2 ;
-(void)willPerformRecoveryFromRuntimeError:(id)arg1 ;
-(void)handleSessionDidStartRunning;
-(void)handleSessionDidStopRunning;
-(void)handleSessionInterruptionForReason:(long long)arg1 ;
-(void)handleSessionInterruptionEnded;
-(void)setResultDelegate:(id<CAMCaptureResultDelegate>)arg1 ;
-(void)registerCaptureService:(id)arg1 ;
-(void)_setupFocusAndExposureMonitoring;
-(void)_setupSuggestionMonitoring;
-(void)_setupAvailabilityMonitoring;
-(void)_setupZoomMonitoring;
-(void)_setupSystemPressureStateMonitoring;
-(void)_setupOverCapturePreviewMonitoring;
-(void)_handleCaptureEngineExecutionNotification:(id)arg1 ;
-(void)_handleShallowDepthOfFieldStatusChangedNotification:(id)arg1 ;
-(id)_commandForConfiguration:(id)arg1 outRequestID:(int*)arg2 ;
-(void)_setVideoCaptureAvailable:(BOOL)arg1 ;
-(void)_teardownFocusAndExposureMonitoring;
-(void)_teardownSuggestionMonitoring;
-(void)_teardownAvailabilityMonitoring;
-(void)_teardownZoomMonitoring;
-(void)_teardownSystemPressureStateMonitoring;
-(void)_tearDownOverCapturePreviewMonitoring;
-(id<CAMPreviewLayerOverCaptureStatusDelegate>)previewLayerOverCaptureStatusDelegate;
-(CAMThumbnailGenerator *)_responseThumbnailGenerator;
-(void)_startCaptureSignpostIntervalForPersistenceUUID:(id)arg1 ;
-(CAMStillImageCaptureRequest *)_capturingCTMVideoRequest;
-(void)_setCapturingCTMVideoRequest:(id)arg1 ;
-(NSCountedSet *)_numberOfInflightRequestsByType;
-(BOOL)_internalCaptureStillImageWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)_endCaptureSignpostIntervalForPersistenceUUID:(id)arg1 ;
-(BOOL)_isFailedConfigurationPreventingCapture;
-(id)_sanitizeStillImageRequest:(id)arg1 ;
-(void)_setCapturingLowLightStillImageRequest:(id)arg1 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterEnqueuingRequest:(id)arg1 ;
-(void)_updateAvailabilityAfterEnqueuedRequest:(id)arg1 ;
-(BOOL)_needsInitialPairedVideoUpdate;
-(BOOL)_isCapturingPairedVideoPaused;
-(void)_setCapturingPairedVideoPaused:(BOOL)arg1 ;
-(void)_setNeedsInitialPairedVideoUpdate:(BOOL)arg1 ;
-(id)_identifierForPendingVideoForStillImageRequest:(id)arg1 ;
-(void)_beginTrackingCTMVideoRecordingForIdentifier:(id)arg1 ;
-(void)_beginTrackingLivePhotoVideoRecordingForIdentifier:(id)arg1 ;
-(void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
-(void)_processCapturedBurstRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_updateAvailabilityAfterCapturedRequest:(id)arg1 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterCapturedRequestIfNecessary:(id)arg1 ;
-(CAMStillImageCaptureRequest *)_capturingLowLightStillImageRequest;
-(id)_thumbnailImageFromStillImageCaptureResult:(id)arg1 imageOrientation:(long long)arg2 ;
-(void)_endTrackingLivePhotoVideoRecordingForIdentifier:(id)arg1 ;
-(void)_resetFocusAndExposureAfterCapture;
-(void)_endTrackingCTMVideoRecordingForIdentifier:(id)arg1 ;
-(id)_thumbnailImageFromVideoCaptureResult:(id)arg1 previewOrientation:(long long)arg2 previewImage:(out id*)arg3 ;
-(NSMutableSet *)_identifiersForActiveLivePhotoVideoCaptures;
-(id<CAMStillImageCapturingVideoDelegate>)stillImageCapturingVideoDelegate;
-(NSMutableSet *)_identifiersForActiveCTMVideoCaptures;
-(BOOL)isCapturingStandardVideo;
-(CAMVideoCaptureRequest *)_capturingVideoRequest;
-(id)_realtimeMetadataCommandsForMode:(long long)arg1 capturing:(BOOL)arg2 wantsMachineReadableCodes:(BOOL)arg3 ;
-(void)_setPendingVideoCaptureRequest:(id)arg1 ;
-(BOOL)_internalStartCapturingVideoWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_sanitizeVideoRequest:(id)arg1 ;
-(void)_setCapturingVideoRequest:(id)arg1 ;
-(void)_didPlayBeginVideoRecordingSound;
-(void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg1 ;
-(CAMVideoCaptureRequest *)_pendingVideoCaptureRequest;
-(void)_processPendingVideoCaptureRequest:(id)arg1 ;
-(void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg1 ;
-(CAMPanoramaCaptureRequest *)_capturingPanoramaRequest;
-(id)_sanitizePanoramaRequest:(id)arg1 ;
-(void)_setCapturingPanoramaRequest:(id)arg1 ;
-(id)_updateFocusAndExposureForStartPanorama;
-(void)cancelDelayedFocusAndExposureReset;
-(id<CAMPanoramaChangeDelegate>)panoramaChangeDelegate;
-(CAMCaptureRequestIntervalometer *)currentBurstIntervalometer;
-(unsigned long long)currentBurstCount;
-(id)_updateFocusAndExposureForStartBurstCapture;
-(void)_setCurrentBurstIntervalometer:(id)arg1 ;
-(id<CAMBurstDelegate>)burstDelegate;
-(id)_commandForChangeToGraphConfiguration:(id)arg1 zoomFactor:(double)arg2 minimumExecutionTime:(double)arg3 outRequestID:(int*)arg4 ;
-(int)_uniqueRequestIDForChangeToModeAndDevice;
-(BOOL)_wantsMachineReadableCodesForGraphConfiguration:(id)arg1 ;
-(void)_setFailedConfigurationPreventingCapture:(BOOL)arg1 ;
-(id)_commandForResetFocus:(BOOL)arg1 resetExposure:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3 ;
-(id<CAMFocusDelegate>)focusDelegate;
-(BOOL)_useSmoothFocus;
-(BOOL)hasActiveCTMVideoCaptures;
-(BOOL)_shouldResetFocusAndExposureAfterCapture;
-(void)_resetFocusAndExposureIfAppropriateForReason:(long long)arg1 ;
-(void)_setupFocusMonitoring;
-(void)_setupExposureMonitoring;
-(void)_subjectAreaDidChange:(id)arg1 ;
-(id)_focusKVOKeyPaths;
-(id<CAMExposureDelegate>)exposureDelegate;
-(id)_exposureKVOKeyPaths;
-(CAMKeyValueCoalescer *)_focusCoalescer;
-(BOOL)_kvoDidStartForChange:(id)arg1 ;
-(BOOL)_kvoDidEndForChange:(id)arg1 ;
-(CAMKeyValueCoalescer *)_exposureCoalescer;
-(id)_suggestionKeyPaths;
-(void)_setHDRSuggested:(BOOL)arg1 ;
-(void)_setLowLightStatus:(long long)arg1 ;
-(id)_availabilityKeyPaths;
-(long long)_maximumNumberOfStillImageRequests;
-(unsigned long long)_maximumNumberOfStillImageRequestsDuringBurst;
-(void)_setMaximumNumberOfStillImageRequests:(long long)arg1 ;
-(BOOL)_isVideoCaptureAvailable;
-(void)_setCaptureAvailable:(BOOL)arg1 ;
-(void)_setConfigurationAvailable:(BOOL)arg1 ;
-(void)_notifyDelegateOfCaptureAvailabilityChanged:(BOOL)arg1 ;
-(void)_notifyDelegateOfConfigurationAvailabilityChanged:(BOOL)arg1 ;
-(BOOL)_shouldTrackInflightCountForRequest:(id)arg1 ;
-(void)_updateAvailabilityForRequestType:(long long)arg1 ;
-(id<CAMFacesDelegate>)facesDelegate;
-(id<CAMMachineReadableCodeDelegate>)machineReadableCodeDelegate;
-(id<CAMCaptureRecoveryDelegate>)recoveryDelegate;
-(id<CAMCaptureRunningDelegate>)runningDelegate;
-(id<CAMCaptureInterruptionDelegate>)interruptionDelegate;
-(void)unregisterCaptureService:(id)arg1 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(id)_zoomMonitoringKeyPaths;
-(void)setRampingVideoZoom:(BOOL)arg1 ;
-(id<CAMShallowDepthOfFieldStatusDelegate>)shallowDepthOfFieldStatusDelegate;
-(BOOL)_shouldMonitorSystemPressureState;
-(id)_systemPressureStateMonitoringKeyPaths;
-(void)_handleSystemPressureStateChanged;
-(void)_focusResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_exposureResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_suggestionResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_availabilityResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_zoomResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_systemPressureStateMonitoringChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_overCapturePreviewStatusChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(NSMutableDictionary *)_persistenceUUIDToSignpostID;
-(unsigned long long)_nextSignpostID;
-(void)_setNextSignpostID:(unsigned long long)arg1 ;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(void)intervalometerDidReachMaximumCount:(id)arg1 ;
-(id)initWithCaptureConfiguration:(id)arg1 engineOptions:(long long)arg2 locationController:(id)arg3 motionController:(id)arg4 burstController:(id)arg5 protectionController:(id)arg6 powerController:(id)arg7 irisVideoController:(id)arg8 remoteShutterController:(id)arg9 ;
-(void)notifyTimelapseControllerFinishedUpdatingWithLocation;
-(int)changeToGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 ;
-(void)changeToTorchLevel:(float)arg1 ;
-(BOOL)shouldAllowUserToChangeFocusAndExposure;
-(void)focusAndExposeAtPoint:(CGPoint)arg1 lockFocus:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3 ;
-(void)changeToLockedExposure;
-(void)forceDisableSubjectAreaChangeMonitoring;
-(void)lockFocusAtLensPosition:(float)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)changeExposureTargetBias:(float)arg1 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterBurst;
-(void)queryVideoDimensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)queryTimelapseDimensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startCaptureSession;
-(void)stopCaptureSession;
-(void)setFocusDelegate:(id<CAMFocusDelegate>)arg1 ;
-(void)setExposureDelegate:(id<CAMExposureDelegate>)arg1 ;
@end

