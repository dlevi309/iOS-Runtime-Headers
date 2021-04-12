/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMPanoramaProcessorDelegate.h>
#import <libobjc.A.dylib/AVCaptureVideoThumbnailContentsDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class AVCaptureDevice, AVCaptureDeviceInput, CAMPanoramaConfiguration, AVCapturePhotoOutput, CAMCaptureMovieFileOutput, CAMPanoramaOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, AVCaptureVideoThumbnailOutput, CAMMemoizationCache, AVCaptureSession, NSObject, AVCaptureVideoPreviewLayer, AVSpatialOverCaptureVideoPreviewLayer, CAMPowerController, NSMutableDictionary, NSMutableSet, NSURL, NSMutableArray, CAMPanoramaProcessor, CIContext, NSHashTable, NSString;

@interface CAMCaptureEngine : NSObject <CAMPanoramaProcessorDelegate, AVCaptureVideoThumbnailContentsDelegate> {

	AVCaptureDevice* _audioCameraDevice;
	AVCaptureDeviceInput* _audioCaptureDeviceInput;
	CAMPanoramaConfiguration* _panoramaConfiguration;
	AVCapturePhotoOutput* _stillImageOutput;
	CAMCaptureMovieFileOutput* _movieFileOutput;
	CAMPanoramaOutput* _panoramaVideoDataOutput;
	AVCaptureMetadataOutput* _metadataOutput;
	AVCaptureVideoDataOutput* _effectsPreviewVideoDataOutput;
	AVCaptureVideoThumbnailOutput* _videoThumbnailOutput;
	BOOL _interrupted;
	BOOL _managedDevicesLockedForConfiguration;
	BOOL __performingRecovery;
	unsigned __panoramaAssertionIdentifier;
	CAMMemoizationCache* __captureEngineDeviceCache;
	long long __engineOptions;
	AVCaptureSession* __captureSession;
	NSObject*<OS_dispatch_queue> __captureSessionQueue;
	NSObject*<OS_dispatch_queue> __captureResultsQueue;
	AVCaptureVideoPreviewLayer* __videoPreviewLayer;
	AVSpatialOverCaptureVideoPreviewLayer* __overCaptureVideoPreviewLayer;
	CAMPowerController* __powerController;
	AVCaptureDevice* _currentCameraDevice;
	AVCapturePhotoOutput* _currentStillImageOutput;
	NSMutableDictionary* __resultsQueueRegisteredStillImageRequests;
	NSMutableSet* __resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
	NSMutableDictionary* __sessionQueueCachedPhotoInitiationSettings;
	NSMutableDictionary* __resultsQueueRequestsBeingRecorded;
	NSURL* __resultsQueueLastCompletedVideoURL;
	double __resultsQueueLastCompletedVideoZoomFactor;
	NSObject*<OS_dispatch_queue> __captureServicesQueue;
	NSMutableArray* __servicesQueueCaptureServices;
	NSObject*<OS_dispatch_queue> __metadataObjectsQueue;
	NSObject*<OS_dispatch_queue> __panoramaSampleBufferQueue;
	NSObject*<OS_dispatch_queue> __panoramaSubgraphQueue;
	CAImageQueueRef __panoramaImageQueue;
	CAMPanoramaProcessor* __panoramaProcessor;
	NSObject*<OS_dispatch_semaphore> __panoramaFirstImageQueueUpdateSemaphore;
	NSObject*<OS_dispatch_queue> __panoramaFirstImageQueueUpdateSemaphoreQueue;
	NSObject*<OS_dispatch_queue> __effectsPreviewSurfaceFilteringQueue;
	CIContext* __effectsPreviewSurfaceFilteringContext;
	NSObject*<OS_dispatch_queue> __effectsPreviewSampleBufferQueue;
	NSHashTable* __effectsPreviewSampleBufferDelegates;
	NSHashTable* __videoThumbnailContentsDelegates;
	NSObject*<OS_dispatch_queue> __recoveryMutexQueue;
	unsigned long long __numberOfRecoveryAttempts;

}

@property (nonatomic,readonly) CAMMemoizationCache * _captureEngineDeviceCache;                                                                                        //@synthesize _captureEngineDeviceCache=__captureEngineDeviceCache - In the implementation block
@property (nonatomic,readonly) long long _engineOptions;                                                                                                               //@synthesize _engineOptions=__engineOptions - In the implementation block
@property (nonatomic,readonly) AVCaptureSession * _captureSession;                                                                                                     //@synthesize _captureSession=__captureSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureSessionQueue;                                                                                      //@synthesize _captureSessionQueue=__captureSessionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureResultsQueue;                                                                                      //@synthesize _captureResultsQueue=__captureResultsQueue - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * _videoPreviewLayer;                                                                                        //@synthesize _videoPreviewLayer=__videoPreviewLayer - In the implementation block
@property (nonatomic,readonly) AVSpatialOverCaptureVideoPreviewLayer * _overCaptureVideoPreviewLayer;                                                                  //@synthesize _overCaptureVideoPreviewLayer=__overCaptureVideoPreviewLayer - In the implementation block
@property (assign,setter=_setInterrupted:,getter=isInterrupted,nonatomic) BOOL interrupted;                                                                            //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                                                                  //@synthesize _powerController=__powerController - In the implementation block
@property (assign,setter=_setPanoramaAssertionIdentifier:,nonatomic) unsigned _panoramaAssertionIdentifier;                                                            //@synthesize _panoramaAssertionIdentifier=__panoramaAssertionIdentifier - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentCameraDevice;                                                                                                    //@synthesize currentCameraDevice=_currentCameraDevice - In the implementation block
@property (nonatomic,retain) AVCapturePhotoOutput * currentStillImageOutput;                                                                                           //@synthesize currentStillImageOutput=_currentStillImageOutput - In the implementation block
@property (assign,getter=areManagedDevicesLockedForConfiguration,nonatomic) BOOL managedDevicesLockedForConfiguration;                                                 //@synthesize managedDevicesLockedForConfiguration=_managedDevicesLockedForConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultsQueueRegisteredStillImageRequests;                                                                        //@synthesize _resultsQueueRegisteredStillImageRequests=__resultsQueueRegisteredStillImageRequests - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;                                                     //@synthesize _resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue=__resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionQueueCachedPhotoInitiationSettings;                                                                       //@synthesize _sessionQueueCachedPhotoInitiationSettings=__sessionQueueCachedPhotoInitiationSettings - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultsQueueRequestsBeingRecorded;                                                                               //@synthesize _resultsQueueRequestsBeingRecorded=__resultsQueueRequestsBeingRecorded - In the implementation block
@property (setter=_setResultsQueueLastCompletedVideoURL:,nonatomic,retain) NSURL * _resultsQueueLastCompletedVideoURL;                                                 //@synthesize _resultsQueueLastCompletedVideoURL=__resultsQueueLastCompletedVideoURL - In the implementation block
@property (assign,setter=_setResultsQueueLastCompletedVideoZoomFactor:,nonatomic) double _resultsQueueLastCompletedVideoZoomFactor;                                    //@synthesize _resultsQueueLastCompletedVideoZoomFactor=__resultsQueueLastCompletedVideoZoomFactor - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureServicesQueue;                                                                                     //@synthesize _captureServicesQueue=__captureServicesQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _servicesQueueCaptureServices;                                                                                         //@synthesize _servicesQueueCaptureServices=__servicesQueueCaptureServices - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _metadataObjectsQueue;                                                                                     //@synthesize _metadataObjectsQueue=__metadataObjectsQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaSampleBufferQueue;                                                                                //@synthesize _panoramaSampleBufferQueue=__panoramaSampleBufferQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaSubgraphQueue;                                                                                    //@synthesize _panoramaSubgraphQueue=__panoramaSubgraphQueue - In the implementation block
@property (assign,setter=_setPanoramaImageQueue:,nonatomic) CAImageQueueRef _panoramaImageQueue;                                                                       //@synthesize _panoramaImageQueue=__panoramaImageQueue - In the implementation block
@property (setter=_setPanoramaProcessor:,nonatomic,retain) CAMPanoramaProcessor * _panoramaProcessor;                                                                  //@synthesize _panoramaProcessor=__panoramaProcessor - In the implementation block
@property (setter=_setPanoramaFirstImageQueueUpdateSemaphore:,nonatomic,retain) NSObject*<OS_dispatch_semaphore> _panoramaFirstImageQueueUpdateSemaphore;              //@synthesize _panoramaFirstImageQueueUpdateSemaphore=__panoramaFirstImageQueueUpdateSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaFirstImageQueueUpdateSemaphoreQueue;                                                              //@synthesize _panoramaFirstImageQueueUpdateSemaphoreQueue=__panoramaFirstImageQueueUpdateSemaphoreQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _effectsPreviewSurfaceFilteringQueue;                                                                      //@synthesize _effectsPreviewSurfaceFilteringQueue=__effectsPreviewSurfaceFilteringQueue - In the implementation block
@property (nonatomic,readonly) CIContext * _effectsPreviewSurfaceFilteringContext;                                                                                     //@synthesize _effectsPreviewSurfaceFilteringContext=__effectsPreviewSurfaceFilteringContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _effectsPreviewSampleBufferQueue;                                                                          //@synthesize _effectsPreviewSampleBufferQueue=__effectsPreviewSampleBufferQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * _effectsPreviewSampleBufferDelegates;                                                                                     //@synthesize _effectsPreviewSampleBufferDelegates=__effectsPreviewSampleBufferDelegates - In the implementation block
@property (nonatomic,readonly) NSHashTable * _videoThumbnailContentsDelegates;                                                                                         //@synthesize _videoThumbnailContentsDelegates=__videoThumbnailContentsDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _recoveryMutexQueue;                                                                                       //@synthesize _recoveryMutexQueue=__recoveryMutexQueue - In the implementation block
@property (assign,setter=_setPerformingRecovery:,getter=_isPerformingRecovery,nonatomic) BOOL _performingRecovery;                                                     //@synthesize _performingRecovery=__performingRecovery - In the implementation block
@property (assign,setter=_setNumberOfRecoveryAttempts:,nonatomic) unsigned long long _numberOfRecoveryAttempts;                                                        //@synthesize _numberOfRecoveryAttempts=__numberOfRecoveryAttempts - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preheatCaptureResources;
+(id)_cacheKeyForDeviceType:(id)arg1 position:(long long)arg2 ;
-(CAMPowerController *)_powerController;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(BOOL)isInterrupted;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(NSObject*<OS_dispatch_queue>)_panoramaSampleBufferQueue;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_handleCaptureOutputDidFinishCapturingPhoto:(id)arg1 deferredPhotoProxy:(id)arg2 error:(id)arg3 ;
-(id)_coordinationInfoForRequest:(id)arg1 resolvedSettings:(id)arg2 videoComplementURL:(id)arg3 isFiltered:(BOOL)arg4 ;
-(void)enqueueCommands:(id)arg1 ;
-(void)stopRecording;
-(id)stillImageOutput;
-(id)_coordinationInfoForCTMVideoRequest:(id)arg1 videoOutputURL:(id)arg2 resolvedMomentCaptureMovieSettings:(id)arg3 ;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(id)videoThumbnailOutput;
-(NSMutableDictionary *)_resultsQueueRegisteredStillImageRequests;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(void)_recoverFromSessionRuntimeError;
-(CAImageQueueRef)_panoramaImageQueue;
-(void)_handleFailedSessionRecoveryAttemptAfterDelay:(BOOL)arg1 ;
-(id)backTelephotoCameraDevice;
-(id)overCaptureVideoPreviewLayer;
-(void)_updateEffectsSubgraph;
-(void)captureOutput:(id)arg1 didFinishRecordingMovie:(id)arg2 ;
-(void)_cancelDelayedSessionNonstartRecovery;
-(id)audioCaptureDevice;
-(id)prewarmedVideoDeviceInput:(id)arg1 position:(long long)arg2 device:(id)arg3 ;
-(void)_updateCurrentlyConfiguredObjects;
-(void)_setNumberOfRecoveryAttempts:(unsigned long long)arg1 ;
-(id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_panoramaFirstImageQueueUpdateSemaphoreQueue;
-(void)_setResultsQueueLastCompletedVideoZoomFactor:(double)arg1 ;
-(void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6 ;
-(void)_setPerformingRecovery:(BOOL)arg1 ;
-(BOOL)_updatePanoramaSubgraphForEnteringBackground:(BOOL)arg1 ;
-(NSHashTable *)_effectsPreviewSampleBufferDelegates;
-(id)movieFileOutput;
-(void)_unlockManagedCaptureDevice:(id)arg1 ;
-(void)_subgraphQueueHandlePanoramaErrorNotification:(CFStringRef)arg1 ;
-(void)setManagedDevicesLockedForConfiguration:(BOOL)arg1 ;
-(void)_resultsQueue_logReceivedCallbacksForID:(long long)arg1 withIntroString:(id)arg2 ;
-(void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(id)audioCaptureDeviceInput;
-(void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(SCD_Struct_CA7)arg3 photoDisplayTime:(SCD_Struct_CA7)arg4 resolvedSettings:(id)arg5 error:(id)arg6 ;
-(SCD_Struct_CA34)_previewFilterSetForRequest:(id)arg1 previewSize:(CGSize)arg2 ;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(id)frontPearlCameraDevice;
-(id)_coordinationInfoForRequest:(id)arg1 photo:(id)arg2 ;
-(void)_setPanoramaImageQueue:(CAImageQueueRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)_captureServicesQueue;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)_enumerateCaptureServicesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isPerformingRecovery;
-(void)_checkCallbacksForUniqueID:(long long)arg1 afterDelay:(double)arg2 startTime:(double)arg3 ;
-(id)_validateVideoAtURL:(id)arg1 withCaptureID:(long long)arg2 withCaptureError:(id)arg3 isVideoComplement:(BOOL)arg4 stillImageDisplayTime:(SCD_Struct_CA7)arg5 reportedDuration:(SCD_Struct_CA7)arg6 outActualDuration:(SCD_Struct_CA7*)arg7 outVideoRecordingStoppedReason:(long long*)arg8 ;
-(void)_setInterrupted:(BOOL)arg1 ;
-(void)_enumerateCaptureServicesUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)prewarmedAudioDeviceInput:(id)arg1 device:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_captureResultsQueue;
-(void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(void)unregisterCaptureService:(id)arg1 ;
-(void)_subgraphQueueHandlePanoramaStatusNotification:(CFStringRef)arg1 ;
-(BOOL)areManagedDevicesLockedForConfiguration;
-(void)captureOutput:(id)arg1 didBeginMovieCaptureForResolvedSettings:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_captureSessionQueue;
-(AVSpatialOverCaptureVideoPreviewLayer *)_overCaptureVideoPreviewLayer;
-(void)_didFinishStillImageCaptureForUniqueID:(long long)arg1 error:(id)arg2 ;
-(id)_videoDeviceInputFromSession:(id)arg1 ;
-(void)_performSessionRuntimeRecovery:(id)arg1 ;
-(id)backSuperWideCameraDevice;
-(double)_delayForRecoveryAttempt:(unsigned long long)arg1 ;
-(void)captureOutput:(id)arg1 didFinishMovieCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)arg1 ;
-(void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(opaqueCMSampleBufferRef)arg2 withStatus:(int)arg3 forRequest:(id)arg4 ;
-(void)stopPanoramaCaptureInterrupted:(BOOL)arg1 ;
-(void)videoThumbnailOutputWillEndRenderingThumbnails:(id)arg1 ;
-(id)backDualCameraDevice;
-(id)cachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(void)_handleSessionInterruptionEnded:(id)arg1 ;
-(void)_handleSessionRuntimeError:(id)arg1 ;
-(CAMPanoramaProcessor *)_panoramaProcessor;
-(NSObject*<OS_dispatch_semaphore>)_panoramaFirstImageQueueUpdateSemaphore;
-(void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3 ;
-(void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
-(id)metadataOutput;
-(id)frontCameraDevice;
-(void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2 ;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(void)_performSessionNonstartRecoveryIfNeeded;
-(id)_photoOutputFromSession:(id)arg1 ;
-(SCD_Struct_CA34)_previewFilterSetForRequest:(id)arg1 photo:(id)arg2 ;
-(BOOL)_lockAllEngineManagedDevices;
-(AVCaptureDevice *)currentCameraDevice;
-(void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2 ;
-(id)_captureEngineDeviceForDeviceType:(id)arg1 position:(long long)arg2 ;
-(void)registerCaptureService:(id)arg1 ;
-(BOOL)_isSessionModificationRequiredByCommand:(id)arg1 logReason:(out id*)arg2 minimumExecutionTime:(out double*)arg3 ;
-(CVBufferRef)_createOutputPixelBufferWithSize:(CGSize)arg1 matchingInputPixelBuffer:(CVBufferRef)arg2 ;
-(void)captureOutput:(id)arg1 didFinishWritingMovie:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3 ;
-(void)videoThumbnailOutput:(id)arg1 willBeginRenderingThumbnailsWithContents:(id)arg2 ;
-(long long)_notificationForError:(CFStringRef)arg1 ;
-(BOOL)_lockManagedCapturedDevice:(id)arg1 ;
-(NSMutableSet *)_resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
-(void)setCurrentStillImageOutput:(AVCapturePhotoOutput *)arg1 ;
-(id)initWithPowerController:(id)arg1 options:(long long)arg2 ;
-(void)_scheduleDelayedSessionNonstartRecovery;
-(void)captureOutput:(id)arg1 willBeginCaptureBeforeResolvingSettingsForUniqueID:(long long)arg2 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)_setPanoramaProcessor:(id)arg1 ;
-(AVCaptureSession *)_captureSession;
-(void)_handleSessionDidStartRunning:(id)arg1 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(unsigned)_panoramaAssertionIdentifier;
-(void)_sessionQueuePanoramaSetup;
-(CVBufferRef)_newFilteredPixelBufferFromPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 filters:(id)arg3 ;
-(CAMMemoizationCache *)_captureEngineDeviceCache;
-(id)backWideDualCameraDevice;
-(NSMutableDictionary *)_sessionQueueCachedPhotoInitiationSettings;
-(NSObject*<OS_dispatch_queue>)_panoramaSubgraphQueue;
-(void)_sessionQueue_startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)panoramaVideoDataOutput;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)_handleSessionDidStopRunning:(id)arg1 ;
-(void)_subgraphQueueHandlePanoramaWarningNotification:(CFStringRef)arg1 ;
-(long long)_engineOptions;
-(NSMutableArray *)_servicesQueueCaptureServices;
-(double)_resultsQueueLastCompletedVideoZoomFactor;
-(void)_updateContext:(id)arg1 ;
-(void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2 logReason:(out id*)arg3 minimumExecutionTime:(out double*)arg4 ;
-(void)registerVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)_resetPerformingRecoveryState;
-(NSHashTable *)_videoThumbnailContentsDelegates;
-(void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(CAImageQueueRef)arg1 direction:(long long)arg2 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)_setPanoramaFirstImageQueueUpdateSemaphore:(id)arg1 ;
-(void)_setResultsQueueLastCompletedVideoURL:(id)arg1 ;
-(void)_updateVideoThumbnailSubgraph;
-(id)_previewFiltersForFilterSet:(SCD_Struct_CA34)arg1 ;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSurfaceFilteringQueue;
-(void)currentInflightCapturesStringWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)enqueueCommand:(id)arg1 ;
-(void)_executeCommand:(id)arg1 withContext:(id)arg2 ;
-(NSMutableDictionary *)_resultsQueueRequestsBeingRecorded;
-(NSURL *)_resultsQueueLastCompletedVideoURL;
-(unsigned long long)_numberOfRecoveryAttempts;
-(void)_handleSessionInterruption:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSampleBufferQueue;
-(void)changePanoramaEncodingBehaviorIfNeeded:(long long)arg1 ;
-(void)_scheduleDelayedRecoveryCheckIfNecessary;
-(void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(long long)arg1 ;
-(void)captureOutput:(id)arg1 didFinishCapturingDeferredPhotoProxy:(id)arg2 error:(id)arg3 ;
-(void)_validateSessionRecovery;
-(void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(BOOL)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)_unlockAllEngineManagedDevices;
-(void)changeToPanoramaDirection:(long long)arg1 ;
-(id)backTripleCameraDevice;
-(void)setCurrentCameraDevice:(AVCaptureDevice *)arg1 ;
-(NSObject*<OS_dispatch_queue>)_metadataObjectsQueue;
-(BOOL)_shouldStartSessionOnConfigurationChanges;
-(id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)arg1 ;
-(void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2 ;
-(id)backCameraDevice;
-(void)_setPanoramaAssertionIdentifier:(unsigned)arg1 ;
-(void)_resultsQueue_performPostprocessingForPreviewBuffer:(CVBufferRef)arg1 metadata:(id)arg2 filters:(SCD_Struct_CA34)arg3 stillImageCaptureRequestKey:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)_recoveryMutexQueue;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4 ;
-(void)registerVideoEndZoomFactor:(double)arg1 ;
-(id)prewarmedCaptureSession;
-(void)startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2 ;
-(void)_sessionQueuePanoramaTeardown;
-(void)dealloc;
-(AVCaptureVideoPreviewLayer *)_videoPreviewLayer;
-(id)_accumulatedUserInfoFromCommand:(id)arg1 ;
-(AVCapturePhotoOutput *)currentStillImageOutput;
-(CIContext *)_effectsPreviewSurfaceFilteringContext;
-(id)effectsPreviewVideoDataOutput;
@end

