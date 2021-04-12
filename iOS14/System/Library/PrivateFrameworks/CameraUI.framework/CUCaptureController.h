/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMCaptureService.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@protocol CAMPreviewLayerOverCaptureStatusDelegate, CAMStillImageCapturingVideoDelegate, CAMPanoramaChangeDelegate, CAMBurstDelegate, CAMConfigurationDelegate, CAMSuggestionDelegate, CAMAvailabilityDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMFacesDelegate, CAMMachineReadableCodeDelegate, CAMHistogramDelegate, CAMCaptureResultDelegate, CAMZoomDelegate, CAMCaptureRecoveryDelegate, CAMCaptureRunningDelegate, CAMCaptureInterruptionDelegate, OS_dispatch_queue;
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
	BOOL __didCompleteInitialConfiguration;
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
	id<CAMHistogramDelegate> _histogramDelegate;
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
@property (assign,setter=_setDidCompleteInitialConfiguration:,nonatomic) BOOL _didCompleteInitialConfiguration;                                                                      //@synthesize _didCompleteInitialConfiguration=__didCompleteInitialConfiguration - In the implementation block
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
@property (assign,nonatomic,__weak) id<CAMHistogramDelegate> histogramDelegate;                                                                                                      //@synthesize histogramDelegate=_histogramDelegate - In the implementation block
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
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)_setTorchAvailable:(BOOL)arg1 ;
-(CAMPowerController *)_powerController;
-(BOOL)isTorchAvailable;
-(void)_setFlashActive:(BOOL)arg1 ;
-(void)setCapturingTimelapse:(BOOL)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(BOOL)isInterrupted;
-(BOOL)isRampingVideoZoom;
-(CAMMotionController *)_motionController;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(id)arg1 ;
-(void)_setTorchActive:(BOOL)arg1 ;
-(BOOL)isTorchActive;
-(int)applyCaptureConfiguration:(id)arg1 ;
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2 ;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2 ;
-(double)_defaultZoomFactorForGraphConfiguration:(id)arg1 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterEnqueuingRequest:(id)arg1 ;
-(void)setConfigurationDelegate:(id<CAMConfigurationDelegate>)arg1 ;
-(CAMLocationController *)_locationController;
-(CAMRemoteShutterController *)_remoteShutterController;
-(void)videoRequestDidStartCapturing:(id)arg1 ;
-(void)_updateAvailabilityForRequestType:(long long)arg1 ;
-(BOOL)isCapturingLivePhotoVideo;
-(void)_setFlashAvailable:(BOOL)arg1 ;
-(BOOL)initiateCTMCaptureWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)setHistogramDelegate:(id<CAMHistogramDelegate>)arg1 ;
-(void)_systemPressureStateMonitoringChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)videoRequestDidStopCapturing:(id)arg1 ;
-(void)_teardownSystemPressureStateMonitoring;
-(id)_thumbnailImageFromVideoCaptureResult:(id)arg1 previewOrientation:(long long)arg2 previewImage:(out id*)arg3 ;
-(void)changeToLowLightMode:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_handleShallowDepthOfFieldStatusChangedNotification:(id)arg1 ;
-(void)changeToTimelapseCaptureRate:(float)arg1 ;
-(void)panoramaConfigurationDidChangeWithImageQueue:(CAImageQueueRef)arg1 direction:(long long)arg2 ;
-(id<CAMPreviewLayerOverCaptureStatusDelegate>)previewLayerOverCaptureStatusDelegate;
-(void)panoramaRequestDidStartCapturing:(id)arg1 ;
-(CAMPanoramaPreviewView *)panoramaPreviewView;
-(BOOL)isCapturingPanorama;
-(void)_notifyDelegateOfCaptureAvailabilityChanged:(BOOL)arg1 ;
-(void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)pauseCapturingStillImagePairedVideo;
-(void)_overCapturePreviewStatusChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(id<CAMCaptureInterruptionDelegate>)interruptionDelegate;
-(id)_focusKVOKeyPaths;
-(BOOL)stopCapturingVideo;
-(void)_resetFocusAndExposureIfAppropriateForReason:(long long)arg1 ;
-(void)changeToLockedExposure;
-(BOOL)startCapturingVideoWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasActiveCTMVideoCaptures;
-(void)changeToPortraitAperture:(double)arg1 ;
-(id)_commandForChangeToGraphConfiguration:(id)arg1 zoomFactor:(double)arg2 minimumExecutionTime:(double)arg3 outRequestID:(int*)arg4 ;
-(id<CAMStillImageCapturingVideoDelegate>)stillImageCapturingVideoDelegate;
-(CAMVideoCaptureRequest *)_capturingVideoRequest;
-(void)queryTimelapseDimensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setFocusDelegate:(id<CAMFocusDelegate>)arg1 ;
-(id<CAMMachineReadableCodeDelegate>)machineReadableCodeDelegate;
-(CAMVideoCaptureRequest *)_pendingVideoCaptureRequest;
-(void)_resetFocusAndExposureAfterCapture;
-(id)_sanitizeStillImageRequest:(id)arg1 ;
-(CAMProtectionController *)_protectionController;
-(void)stopCaptureSession;
-(void)_setLowLightStatus:(long long)arg1 ;
-(void)setResultDelegate:(id<CAMCaptureResultDelegate>)arg1 ;
-(BOOL)_wantsMachineReadableCodesForGraphConfiguration:(id)arg1 ;
-(BOOL)stopCapturingPanoramaInterrupted:(BOOL)arg1 ;
-(void)_setDidCompleteInitialConfiguration:(BOOL)arg1 ;
-(void)_zoomResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_teardownZoomMonitoring;
-(BOOL)_needsInitialPairedVideoUpdate;
-(void)_updateMaximumNumberOfStillImageRequestsAfterCapturedRequestIfNecessary:(id)arg1 ;
-(void)_setVideoCaptureAvailable:(BOOL)arg1 ;
-(void)updateRealtimeMetadataConfigurationForGraphConfiguration:(id)arg1 isCapturing:(BOOL)arg2 ;
-(id)_sanitizePanoramaRequest:(id)arg1 ;
-(void)notifyTimelapseControllerFinishedUpdatingWithLocation;
-(NSMutableSet *)_identifiersForActiveLivePhotoVideoCaptures;
-(void)changeToPreviewConfiguration:(unsigned long long)arg1 ;
-(BOOL)isCaptureAvailable;
-(void)changeToVideoZoomFactor:(double)arg1 ;
-(void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg1 ;
-(id)_sanitizeVideoRequest:(id)arg1 ;
-(void)changeExposureTargetBias:(float)arg1 ;
-(void)_handleCaptureEngineExecutionNotification:(id)arg1 ;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)changeToVideoHDRSuspended:(BOOL)arg1 ;
-(void)changeToPreviewFilters:(id)arg1 ;
-(void)willPerformRecoveryFromRuntimeError:(id)arg1 ;
-(id)_suggestionKeyPaths;
-(void)queryVideoDimensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)changeToVideoRecordingCaptureOrientation:(long long)arg1 ;
-(void)setBurstDelegate:(id<CAMBurstDelegate>)arg1 ;
-(void)startRampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2 ;
-(id)_updateFocusAndExposureForStartPanorama;
-(id)_exposureKVOKeyPaths;
-(void)_updateMaximumNumberOfStillImageRequestsAfterBurst;
-(void)endCTMVideoCapture;
-(CAMKeyValueCoalescer *)_exposureCoalescer;
-(NSObject*<OS_dispatch_queue>)_responseQueue;
-(void)setMachineReadableCodeDelegate:(id<CAMMachineReadableCodeDelegate>)arg1 ;
-(void)startCaptureSession;
-(BOOL)isFlashAvailable;
-(CAMIrisVideoController *)_irisVideoController;
-(void)_endTrackingLivePhotoVideoRecordingForIdentifier:(id)arg1 ;
-(void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg1 ;
-(id<CAMPanoramaChangeDelegate>)panoramaChangeDelegate;
-(unsigned long long)_nextSignpostID;
-(void)unregisterCaptureService:(id)arg1 ;
-(void)setExposureDelegate:(id<CAMExposureDelegate>)arg1 ;
-(void)resumeCapturingStillImagePairedVideo;
-(void)setRunningDelegate:(id<CAMCaptureRunningDelegate>)arg1 ;
-(void)setPreviewLayerOverCaptureStatusDelegate:(id<CAMPreviewLayerOverCaptureStatusDelegate>)arg1 ;
-(BOOL)startCapturingPanoramaWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)focusAtCenterForVideoRecording;
-(void)_setupZoomMonitoring;
-(void)stillImageRequest:(id)arg1 didStopCapturingLivePhotoVideoForCoordinationInfo:(id)arg2 ;
-(CAMCaptureEngine *)_captureEngine;
-(void)_setupSuggestionMonitoring;
-(BOOL)isConfigurationAvailable;
-(id)_updateFocusAndExposureForStartBurstCapture;
-(void)_setHDRSuggested:(BOOL)arg1 ;
-(void)_setCapturingPanoramaRequest:(id)arg1 ;
-(void)_availabilityResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(CAMCaptureRequestIntervalometer *)currentBurstIntervalometer;
-(void)prepareToCaptureStillImageAtSystemTime:(long long)arg1 ;
-(void)changeToAspectRatioCrop:(long long)arg1 ;
-(void)_setPendingVideoCaptureRequest:(id)arg1 ;
-(NSMutableDictionary *)_persistenceUUIDToSignpostID;
-(BOOL)shouldAllowUserToChangeFocusAndExposure;
-(BOOL)isPreviewDisabled;
-(void)_setCapturingCTMVideoRequest:(id)arg1 ;
-(BOOL)_shouldUseShotBufferForRequest:(id)arg1 ;
-(id<CAMAvailabilityDelegate>)availabilityDelegate;
-(id<CAMSuggestionDelegate>)suggestionDelegate;
-(void)stopMonitoringForHDRSuggestions;
-(int)changeToGraphConfiguration:(id)arg1 zoomFactor:(double)arg2 minimumExecutionTime:(double)arg3 ;
-(id<CAMCaptureRunningDelegate>)runningDelegate;
-(BOOL)_kvoDidEndForChange:(id)arg1 ;
-(void)metadataWasRecognized:(id)arg1 forMetadataObjectTypes:(id)arg2 deviceFormat:(id)arg3 ;
-(BOOL)_internalStartCapturingVideoWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)changeToPortraitLightingEffectStrength:(double)arg1 ;
-(void)setRampingVideoZoom:(BOOL)arg1 ;
-(void)setPanoramaChangeDelegate:(id<CAMPanoramaChangeDelegate>)arg1 ;
-(void)focusAndExposeAtPoint:(CGPoint)arg1 lockFocus:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3 ;
-(long long)lowLightStatus;
-(void)_setCurrentBurstIntervalometer:(id)arg1 ;
-(void)_subjectAreaDidChange:(id)arg1 ;
-(void)_processCapturedBurstRequest:(id)arg1 withResult:(id)arg2 ;
-(id<CAMConfigurationDelegate>)configurationDelegate;
-(void)_beginTrackingCTMVideoRecordingForIdentifier:(id)arg1 ;
-(void)_startCaptureSignpostIntervalForPersistenceUUID:(id)arg1 ;
-(id)_thumbnailImageFromStillImageCaptureResult:(id)arg1 imageOrientation:(long long)arg2 ;
-(void)_setupOverCapturePreviewMonitoring;
-(id<CAMBurstDelegate>)burstDelegate;
-(NSMutableSet *)_identifiersForActiveCTMVideoCaptures;
-(void)_setCapturingLowLightStillImageRequest:(id)arg1 ;
-(void)stopCapturingBurst;
-(void)_endTrackingCTMVideoRecordingForIdentifier:(id)arg1 ;
-(void)_setCapturingPairedVideoPaused:(BOOL)arg1 ;
-(void)_teardownAvailabilityMonitoring;
-(CAMBurstController *)_burstController;
-(void)setFacesDelegate:(id<CAMFacesDelegate>)arg1 ;
-(void)attemptToEndInterruptions;
-(id<CAMExposureDelegate>)exposureDelegate;
-(id)initWithCaptureConfiguration:(id)arg1 engineOptions:(long long)arg2 locationController:(id)arg3 motionController:(id)arg4 burstController:(id)arg5 protectionController:(id)arg6 powerController:(id)arg7 irisVideoController:(id)arg8 remoteShutterController:(id)arg9 ;
-(CAMThumbnailGenerator *)_responseThumbnailGenerator;
-(void)registerCaptureService:(id)arg1 ;
-(void)_setupFocusMonitoring;
-(id<CAMShallowDepthOfFieldStatusDelegate>)shallowDepthOfFieldStatusDelegate;
-(BOOL)captureStillImageWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_internalCaptureStillImageWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)cancelDelayedFocusAndExposureReset;
-(id<CAMHistogramDelegate>)histogramDelegate;
-(id<CAMZoomDelegate>)zoomDelegate;
-(id)_realtimeMetadataCommandsForMode:(long long)arg1 videoConfiguration:(long long)arg2 capturing:(BOOL)arg3 wantsMachineReadableCodes:(BOOL)arg4 ;
-(void)_setupFocusAndExposureMonitoring;
-(void)intervalometer:(id)arg1 didReachMaximumCountWithRequest:(id)arg2 ;
-(BOOL)_shouldMonitorSystemPressureState;
-(void)_exposureResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(CAMStillImageCaptureRequest *)_capturingCTMVideoRequest;
-(void)panoramaRequest:(id)arg1 didReceiveNotification:(long long)arg2 ;
-(int)_uniqueRequestIDForChangeToModeAndDevice;
-(void)cancelCTMCaptureForSettings:(id)arg1 ;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(BOOL)isCapturingStandardVideo;
-(id<CAMCaptureRecoveryDelegate>)recoveryDelegate;
-(void)_setCaptureAvailable:(BOOL)arg1 ;
-(void)setZoomDelegate:(id<CAMZoomDelegate>)arg1 ;
-(void)_updateAvailabilityAfterCapturedRequest:(id)arg1 ;
-(CAMPanoramaCaptureRequest *)_capturingPanoramaRequest;
-(BOOL)_shouldTrackInflightCountForRequest:(id)arg1 ;
-(void)stillImageRequestWillStartCapturingVideo:(id)arg1 ;
-(void)_notifyDelegateOfConfigurationAvailabilityChanged:(BOOL)arg1 ;
-(void)forceDisableSubjectAreaChangeMonitoring;
-(void)stopCaptureSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_teardownFocusAndExposureMonitoring;
-(id<CAMFacesDelegate>)facesDelegate;
-(void)logCaptureAvailabilityDescription;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)handleSessionInterruptionForReason:(long long)arg1 ;
-(id<CAMCaptureResultDelegate>)resultDelegate;
-(id)_commandForConfiguration:(id)arg1 outRequestID:(int*)arg2 ;
-(void)_updateAvailabilityAfterEnqueuedRequest:(id)arg1 ;
-(void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
-(void)changeToPreviewDisabled;
-(void)_focusResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)changeToPanoramaEncodingBehavior:(long long)arg1 ;
-(BOOL)_canBeginCaptureCheckAvailability:(BOOL)arg1 error:(id*)arg2 ;
-(unsigned long long)currentBurstCount;
-(int)changeToGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 ;
-(void)_setNextSignpostID:(unsigned long long)arg1 ;
-(void)setRecoveryDelegate:(id<CAMCaptureRecoveryDelegate>)arg1 ;
-(BOOL)_kvoDidStartForChange:(id)arg1 ;
-(void)_setNeedsInitialPairedVideoUpdate:(BOOL)arg1 ;
-(void)setSuggestionDelegate:(id<CAMSuggestionDelegate>)arg1 ;
-(void)_endCaptureSignpostIntervalForPersistenceUUID:(id)arg1 ;
-(void)_setupSystemPressureStateMonitoring;
-(id)_availabilityKeyPaths;
-(id)_commandForResetFocus:(BOOL)arg1 resetExposure:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3 ;
-(void)_processPendingVideoCaptureRequest:(id)arg1 ;
-(void)stillImageRequest:(id)arg1 didStopCapturingCTMVideoForCoordinationInfo:(id)arg2 ;
-(void)registerVideoThumbnailContentsDelegate:(id)arg1 ;
-(id)_zoomMonitoringKeyPaths;
-(id)_identifierForPendingVideoForStillImageRequest:(id)arg1 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)_setFailedConfigurationPreventingCapture:(BOOL)arg1 ;
-(BOOL)_useSmoothFocus;
-(BOOL)commitCTMCaptureWithRequest:(id)arg1 error:(id*)arg2 ;
-(CAMStillImageCaptureRequest *)_capturingLowLightStillImageRequest;
-(void)lockFocusAtLensPosition:(float)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)changeToTorchMode:(long long)arg1 ;
-(void)setShallowDepthOfFieldStatusDelegate:(id<CAMShallowDepthOfFieldStatusDelegate>)arg1 ;
-(id<CAMFocusDelegate>)focusDelegate;
-(BOOL)isCapturingBurst;
-(void)_suggestionResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)startMonitoringForHDRSuggestions;
-(void)changeToTorchLevel:(float)arg1 ;
-(void)setAvailabilityDelegate:(id<CAMAvailabilityDelegate>)arg1 ;
-(BOOL)isCapturingCTMVideo;
-(void)handleSessionInterruptionEnded;
-(id)_systemPressureStateMonitoringKeyPaths;
-(void)setStillImageCapturingVideoDelegate:(id<CAMStillImageCapturingVideoDelegate>)arg1 ;
-(void)_handleSystemPressureStateChanged;
-(void)_setupExposureMonitoring;
-(void)_setConfigurationAvailable:(BOOL)arg1 ;
-(BOOL)isCapturingStillImage;
-(void)handleSessionDidStopRunning;
-(void)invalidateController;
-(BOOL)_shouldResetFocusAndExposureAfterCapture;
-(BOOL)isCapturingTimelapse;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(NSCountedSet *)_numberOfInflightRequestsByType;
-(void)changeToPanoramaDirection:(long long)arg1 ;
-(BOOL)isFlashActive;
-(CAMKeyValueCoalescer *)_focusCoalescer;
-(void)_tearDownOverCapturePreviewMonitoring;
-(void)startRampToVideoZoomFactor:(double)arg1 withDuration:(double)arg2 ;
-(void)_didPlayBeginVideoRecordingSound;
-(BOOL)_isCapturingPairedVideoPaused;
-(long long)_maximumNumberOfStillImageRequests;
-(void)stopRampToVideoZoomFactor;
-(BOOL)startCapturingBurstWithRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_maximumNumberOfStillImageRequestsDuringBurst;
-(void)_setupAvailabilityMonitoring;
-(BOOL)isCapturingLowLightImage;
-(void)_setMaximumNumberOfStillImageRequests:(long long)arg1 ;
-(BOOL)_isVideoCaptureAvailable;
-(void)_beginTrackingLivePhotoVideoRecordingForIdentifier:(id)arg1 ;
-(BOOL)isCapturingVideo;
-(void)changeToFlashMode:(long long)arg1 ;
-(void)dealloc;
-(BOOL)_isFailedConfigurationPreventingCapture;
-(BOOL)_didCompleteInitialConfiguration;
-(void)startCaptureSessionWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleSessionDidStartRunning;
-(void)_teardownSuggestionMonitoring;
-(BOOL)isHDRSuggested;
-(void)changeToPreviewEnabledWithConfiguration:(unsigned long long)arg1 ;
-(void)setInterruptionDelegate:(id<CAMCaptureInterruptionDelegate>)arg1 ;
-(void)_setCapturingVideoRequest:(id)arg1 ;
@end

