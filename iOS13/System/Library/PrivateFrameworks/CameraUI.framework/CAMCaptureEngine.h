/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	AVCaptureVideoPreviewLayer* __videoPreviewLayer;
	AVSpatialOverCaptureVideoPreviewLayer* __overCaptureVideoPreviewLayer;
	CAMPowerController* __powerController;
	AVCaptureDevice* _currentCameraDevice;
	AVCapturePhotoOutput* _currentStillImageOutput;
	NSMutableDictionary* __sessionQueueRegisteredStillImageRequests;
	NSMutableSet* __sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
	NSMutableDictionary* __sessionQueueCachedPhotoInitiationSettings;
	NSMutableDictionary* __sessionQueueRequestsBeingRecorded;
	NSURL* __sessionQueueLastCompletedVideoURL;
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
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * _videoPreviewLayer;                                                                                        //@synthesize _videoPreviewLayer=__videoPreviewLayer - In the implementation block
@property (nonatomic,readonly) AVSpatialOverCaptureVideoPreviewLayer * _overCaptureVideoPreviewLayer;                                                                  //@synthesize _overCaptureVideoPreviewLayer=__overCaptureVideoPreviewLayer - In the implementation block
@property (assign,setter=_setInterrupted:,getter=isInterrupted,nonatomic) BOOL interrupted;                                                                            //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                                                                  //@synthesize _powerController=__powerController - In the implementation block
@property (assign,setter=_setPanoramaAssertionIdentifier:,nonatomic) unsigned _panoramaAssertionIdentifier;                                                            //@synthesize _panoramaAssertionIdentifier=__panoramaAssertionIdentifier - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentCameraDevice;                                                                                                    //@synthesize currentCameraDevice=_currentCameraDevice - In the implementation block
@property (nonatomic,retain) AVCapturePhotoOutput * currentStillImageOutput;                                                                                           //@synthesize currentStillImageOutput=_currentStillImageOutput - In the implementation block
@property (assign,getter=areManagedDevicesLockedForConfiguration,nonatomic) BOOL managedDevicesLockedForConfiguration;                                                 //@synthesize managedDevicesLockedForConfiguration=_managedDevicesLockedForConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionQueueRegisteredStillImageRequests;                                                                        //@synthesize _sessionQueueRegisteredStillImageRequests=__sessionQueueRegisteredStillImageRequests - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;                                                     //@synthesize _sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue=__sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionQueueCachedPhotoInitiationSettings;                                                                       //@synthesize _sessionQueueCachedPhotoInitiationSettings=__sessionQueueCachedPhotoInitiationSettings - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionQueueRequestsBeingRecorded;                                                                               //@synthesize _sessionQueueRequestsBeingRecorded=__sessionQueueRequestsBeingRecorded - In the implementation block
@property (setter=_setSessionQueueLastCompletedVideoURL:,nonatomic,retain) NSURL * _sessionQueueLastCompletedVideoURL;                                                 //@synthesize _sessionQueueLastCompletedVideoURL=__sessionQueueLastCompletedVideoURL - In the implementation block
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
-(void)dealloc;
-(BOOL)isInterrupted;
-(void)stopRecording;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)videoThumbnailOutputWillEndRenderingThumbnails:(id)arg1 ;
-(void)videoThumbnailOutput:(id)arg1 willBeginRenderingThumbnailsWithContents:(id)arg2 ;
-(void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)captureOutput:(id)arg1 didBeginMovieCaptureForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)captureOutput:(id)arg1 didFinishWritingMovie:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishMovieCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4 ;
-(void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 didFinishCapturingDeferredPhotoProxy:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(SCD_Struct_CA7)arg3 photoDisplayTime:(SCD_Struct_CA7)arg4 resolvedSettings:(id)arg5 error:(id)arg6 ;
-(void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingMovie:(id)arg2 ;
-(AVCaptureSession *)_captureSession;
-(id)stillImageOutput;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)_numberOfRecoveryAttempts;
-(CAMPowerController *)_powerController;
-(NSObject*<OS_dispatch_queue>)_captureSessionQueue;
-(AVCapturePhotoOutput *)currentStillImageOutput;
-(id)prewarmedVideoDeviceInput:(id)arg1 position:(long long)arg2 device:(id)arg3 ;
-(id)cachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2 ;
-(void)registerVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg1 ;
-(id)movieFileOutput;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)stopPanoramaCaptureInterrupted:(BOOL)arg1 ;
-(id)backCameraDevice;
-(id)backTelephotoCameraDevice;
-(id)backDualCameraDevice;
-(id)backSuperWideCameraDevice;
-(id)backWideDualCameraDevice;
-(id)backTripleCameraDevice;
-(id)frontPearlCameraDevice;
-(id)frontCameraDevice;
-(id)audioCaptureDeviceInput;
-(id)panoramaVideoDataOutput;
-(id)videoThumbnailOutput;
-(id)effectsPreviewVideoDataOutput;
-(id)metadataOutput;
-(void)setCurrentStillImageOutput:(AVCapturePhotoOutput *)arg1 ;
-(void)changeToPanoramaDirection:(long long)arg1 ;
-(void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(opaqueCMSampleBufferRef)arg2 withStatus:(int)arg3 forRequest:(id)arg4 ;
-(id)initWithPowerController:(id)arg1 options:(long long)arg2 ;
-(void)registerCaptureService:(id)arg1 ;
-(void)enqueueCommand:(id)arg1 ;
-(void)startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)overCaptureVideoPreviewLayer;
-(AVCaptureDevice *)currentCameraDevice;
-(void)unregisterCaptureService:(id)arg1 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(AVCaptureVideoPreviewLayer *)_videoPreviewLayer;
-(id)prewarmedCaptureSession;
-(void)_handleSessionDidStartRunning:(id)arg1 ;
-(void)_handleSessionDidStopRunning:(id)arg1 ;
-(void)_handleSessionRuntimeError:(id)arg1 ;
-(void)_handleSessionInterruption:(id)arg1 ;
-(void)_handleSessionInterruptionEnded:(id)arg1 ;
-(long long)_engineOptions;
-(void)_sessionQueue_startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_scheduleDelayedSessionNonstartRecovery;
-(void)_cancelDelayedSessionNonstartRecovery;
-(NSObject*<OS_dispatch_queue>)_recoveryMutexQueue;
-(BOOL)_isPerformingRecovery;
-(void)_resetPerformingRecoveryState;
-(void)_scheduleDelayedRecoveryCheckIfNecessary;
-(void)_enumerateCaptureServicesUsingBlock:(/*^block*/id)arg1 ;
-(void)_performSessionRuntimeRecovery:(id)arg1 ;
-(void)_setPerformingRecovery:(BOOL)arg1 ;
-(void)_setNumberOfRecoveryAttempts:(unsigned long long)arg1 ;
-(void)_handleFailedSessionRecoveryAttemptAfterDelay:(BOOL)arg1 ;
-(void)_recoverFromSessionRuntimeError;
-(NSObject*<OS_dispatch_queue>)_panoramaSampleBufferQueue;
-(void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(BOOL)arg1 ;
-(void)_setInterrupted:(BOOL)arg1 ;
-(double)_delayForRecoveryAttempt:(unsigned long long)arg1 ;
-(void)_performSessionNonstartRecoveryIfNeeded;
-(void)_validateSessionRecovery;
-(BOOL)_updatePanoramaSubgraphForEnteringBackground:(BOOL)arg1 ;
-(id)_videoDeviceInputFromSession:(id)arg1 ;
-(BOOL)_isSessionModificationRequiredByCommand:(id)arg1 logReason:(out id*)arg2 ;
-(id)_accumulatedUserInfoFromCommand:(id)arg1 ;
-(void)_updateCurrentlyConfiguredObjects;
-(void)_updateEffectsSubgraph;
-(void)_updateVideoThumbnailSubgraph;
-(BOOL)_shouldStartSessionOnConfigurationChanges;
-(NSObject*<OS_dispatch_queue>)_panoramaFirstImageQueueUpdateSemaphoreQueue;
-(void)_setPanoramaFirstImageQueueUpdateSemaphore:(id)arg1 ;
-(BOOL)_lockManagedCapturedDevice:(id)arg1 ;
-(void)setManagedDevicesLockedForConfiguration:(BOOL)arg1 ;
-(void)_unlockManagedCaptureDevice:(id)arg1 ;
-(id)_photoOutputFromSession:(id)arg1 ;
-(void)setCurrentCameraDevice:(AVCaptureDevice *)arg1 ;
-(void)_updateContext:(id)arg1 ;
-(void)_executeCommand:(id)arg1 withContext:(id)arg2 ;
-(void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2 logReason:(out id*)arg3 ;
-(BOOL)_lockAllEngineManagedDevices;
-(void)_unlockAllEngineManagedDevices;
-(void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_captureServicesQueue;
-(NSMutableArray *)_servicesQueueCaptureServices;
-(void)_enumerateCaptureServicesUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_sessionQueueRegisteredStillImageRequests;
-(NSMutableDictionary *)_sessionQueueCachedPhotoInitiationSettings;
-(void)_handleCaptureOutputDidFinishCapturingPhoto:(id)arg1 deferredPhotoProxy:(id)arg2 error:(id)arg3 ;
-(id)_coordinationInfoForRequest:(id)arg1 photo:(id)arg2 ;
-(id)_previewFiltersForFilterType:(long long)arg1 previewCrop:(long long)arg2 inPreviewSize:(CGSize)arg3 ;
-(void)_sessionQueue_performPostprocessingForPreviewBuffer:(CVBufferRef)arg1 filters:(id)arg2 stillImageCaptureRequestKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)arg1 ;
-(id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)arg1 ;
-(id)_coordinationInfoForRequest:(id)arg1 resolvedSettings:(id)arg2 videoComplementURL:(id)arg3 isFiltered:(BOOL)arg4 ;
-(id)_validateVideoAtURL:(id)arg1 withCaptureID:(long long)arg2 withCaptureError:(id)arg3 isVideoComplement:(BOOL)arg4 stillImageDisplayTime:(SCD_Struct_CA7)arg5 reportedDuration:(SCD_Struct_CA7)arg6 outActualDuration:(SCD_Struct_CA7*)arg7 outVideoRecordingStoppedReason:(long long*)arg8 ;
-(void)_didFinishStillImageCaptureForUniqueID:(long long)arg1 error:(id)arg2 ;
-(NSMutableSet *)_sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSurfaceFilteringQueue;
-(id)_coordinationInfoForCTMVideoRequest:(id)arg1 videoOutputURL:(id)arg2 resolvedMomentCaptureMovieSettings:(id)arg3 ;
-(CVBufferRef)_createOutputPixelBufferWithSize:(CGSize)arg1 matchingInputPixelBuffer:(CVBufferRef)arg2 ;
-(CVBufferRef)_newFilteredPixelBufferFromPixelBuffer:(CVBufferRef)arg1 filters:(id)arg2 ;
-(NSMutableDictionary *)_sessionQueueRequestsBeingRecorded;
-(NSURL *)_sessionQueueLastCompletedVideoURL;
-(void)_setSessionQueueLastCompletedVideoURL:(id)arg1 ;
-(void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6 ;
-(CAMPanoramaProcessor *)_panoramaProcessor;
-(long long)_notificationForError:(CFStringRef)arg1 ;
-(void)_sessionQueuePanoramaTeardown;
-(void)_sessionQueuePanoramaSetup;
-(NSObject*<OS_dispatch_queue>)_panoramaSubgraphQueue;
-(unsigned)_panoramaAssertionIdentifier;
-(void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(long long)arg1 ;
-(void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
-(CAImageQueueRef)_panoramaImageQueue;
-(void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(CAImageQueueRef)arg1 direction:(long long)arg2 ;
-(void)_setPanoramaProcessor:(id)arg1 ;
-(void)_setPanoramaImageQueue:(CAImageQueueRef)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)_panoramaFirstImageQueueUpdateSemaphore;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSampleBufferQueue;
-(NSHashTable *)_videoThumbnailContentsDelegates;
-(NSHashTable *)_effectsPreviewSampleBufferDelegates;
-(id)_captureEngineDeviceForDeviceType:(id)arg1 position:(long long)arg2 ;
-(CAMMemoizationCache *)_captureEngineDeviceCache;
-(BOOL)areManagedDevicesLockedForConfiguration;
-(id)audioCaptureDevice;
-(id)prewarmedAudioDeviceInput:(id)arg1 device:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_metadataObjectsQueue;
-(void)_subgraphQueueHandlePanoramaStatusNotification:(CFStringRef)arg1 ;
-(void)_subgraphQueueHandlePanoramaWarningNotification:(CFStringRef)arg1 ;
-(void)_subgraphQueueHandlePanoramaErrorNotification:(CFStringRef)arg1 ;
-(void)changePanoramaEncodingBehaviorIfNeeded:(long long)arg1 ;
-(AVSpatialOverCaptureVideoPreviewLayer *)_overCaptureVideoPreviewLayer;
-(void)_setPanoramaAssertionIdentifier:(unsigned)arg1 ;
-(CIContext *)_effectsPreviewSurfaceFilteringContext;
@end

