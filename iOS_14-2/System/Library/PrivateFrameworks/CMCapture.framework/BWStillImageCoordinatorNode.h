/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWFigVideoCaptureStreamStillImageCaptureDelegate.h>
#import <libobjc.A.dylib/BWStillImageProcessingStatusDelegate.h>

@protocol BWStillImageCaptureStatusDelegate, BWStillImageProcessingSupportProvider, OS_dispatch_queue, OS_dispatch_group;
@class BWFigVideoCaptureDevice, NSDictionary, NSMutableArray, NSObject, FigStateMachine, NSMutableDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageProcessingSettings, NSString;

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate> {

	BOOL _active;
	BWFigVideoCaptureDevice* _captureDevice;
	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	id<BWStillImageCaptureStatusDelegate> _stillImageCaptureStatusDelegate;
	id<BWStillImageProcessingSupportProvider> _stillImageProcessingSupportProvider;
	int _stillImageCapturePipeliningMode;
	unsigned _numberOfBurstCapturesInFlight;
	unsigned _maxNumberOfBurstCapturesAllowedInFlight;
	BOOL _alwaysRequestsPreBracketedEV0;
	BOOL _usesHDRPreBracketFrameForErrorRecovery;
	BOOL _supportsCalibrationWithoutDepthForBravoConstituentPhoto;
	NSMutableArray* _requestQueue;
	os_unfair_lock_s _requestQueueLock;
	int _captureRequestCount;
	int _prepareRequestCount;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	NSObject*<OS_dispatch_group> _stillImageDispatchGroup;
	NSObject*<OS_dispatch_group> _stillImageGraphStopDispatchGroup;
	FigStateMachine* _stateMachine;
	NSMutableDictionary* _receivedImagesOrErrorsForRequestByPortType;
	int _clientExpectedImagesOrErrorsForRequest;
	int _clientReceivedImagesOrErrorsForRequest;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	int _captureType;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	BWStillImageProcessingSettings* _currentResolvedStillImageProcessingSettings;
	unsigned _firedDelegateCallbackFlags;
	BOOL _isMomentCaptureCapturingBeforeCommitted;
	NSMutableArray* _momentCaptureUnfiredCallbacks;
	NSMutableArray* _momentCaptureBuffersByInputIndex;
	int _momentCaptureUncommittedStillImageCaptureError;
	long long _momentCaptureUnfiredWillBeginCaptureBeforeResolvingSettingsCallbackSettingsID;
	long long _momentCaptureLastComittedSettingsID;
	SCD_Struct_BW8 _streamingDisruptionEndPTS;
	BOOL _receivedQuadraHighResError;
	os_unfair_lock_s _bufferTrackingLock;
	int _inUseBufferCount;
	BOOL _responsiveShutterEnabled;
	BOOL _fastCapturePrioritizationEnabled;
	BOOL _shotBufferEnabled;
	int _allocatedShotBufferCapacity;
	NSObject*<OS_dispatch_group> _shotBufferWaitGroup;
	int _shotBufferWaitFreeBufferCount;
	BOOL _shotPacerEnabled;
	float _shotPacerMaxFPS;
	long long _lastStillImageCaptureStartTime;
	long long _lastStillImageCaptureCompleteTime;
	BOOL _dynamicShotQualityEnabled;
	int _minFullQualityShots;
	float _timeSinceLastCaptureEnterThreshold;
	float _timeSinceLastCaptureExitThreshold;
	int _numCapturesInShotSequence;
	BOOL _waitForTimeMachineEnabled;

}

@property (assign,nonatomic) id<BWStillImageCaptureStatusDelegate> stillImageCaptureStatusDelegate;                      //@synthesize stillImageCaptureStatusDelegate=_stillImageCaptureStatusDelegate - In the implementation block
@property (assign,nonatomic) id<BWStillImageProcessingSupportProvider> stillImageProcessingSupportProvider;              //@synthesize stillImageProcessingSupportProvider=_stillImageProcessingSupportProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setMaxShotBufferCapacity:(int)arg1 ;
+(int)maxShotBufferCapacity;
+(void)setCurrentAllocatedShotBufferCapacity:(int)arg1 ;
+(id)stringForStillImageCapturePipeliningMode:(int)arg1 ;
+(int)worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg1 captureDevice:(id)arg2 ;
+(int)currentAllocatedShotBufferCapacity;
-(BOOL)responsiveShutterEnabled;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW8)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)setResponsiveShutterEnabled:(BOOL)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_waitToMakePaceWithReferenceTime:(long long)arg1 ;
-(void)_didCaptureStillImage;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(id)_outputForInput:(id)arg1 ;
-(int)_expectedFrameCountForCurrentRequest;
-(void)captureStreamWillWaitForTimeMachineToFill:(id)arg1 ;
-(void)clientReceivedPayloadForSettings:(id)arg1 status:(int)arg2 clientIsMidStillImageGraph:(BOOL)arg3 ;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(BOOL)fastCapturePrioritizationEnabled;
-(id<BWStillImageProcessingSupportProvider>)stillImageProcessingSupportProvider;
-(void)setStillImageCapturePipeliningMode:(int)arg1 ;
-(int)cancelStillImageMomentCaptureWithSettingsID:(long long)arg1 ;
-(int)stillImageCapturePipeliningMode;
-(int)prepareStillImageCaptureNowWithSettings:(id)arg1 ;
-(id)_resolveProcessingSettings;
-(void)_updateAllocatedShotBufferCapacityWithBufferCount:(int)arg1 ;
-(void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
-(id<BWStillImageCaptureStatusDelegate>)stillImageCaptureStatusDelegate;
-(int)_enqueueRequestWithSettings:(id)arg1 serviceRequestsIfNecessary:(BOOL)arg2 ;
-(id)_initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 allStateTransitionsHandler:(/*^block*/id)arg3 ;
-(int)initiateStillImageCaptureNowWithSettings:(id)arg1 ;
-(void)willStopGraph:(BOOL)arg1 ;
-(void)_updateDynamicShotQualitySpeedOverQualityCaptureEnabled:(BOOL*)arg1 waitForTimeMachineToFill:(BOOL*)arg2 ;
-(void)_updateResponsiveShutterEnabled;
-(BOOL)usesHDRPreBracketFrameForErrorRecovery;
-(void)node:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 transform:(id)arg3 ;
-(id)initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 ;
-(void)_attemptToCompleteRequest;
-(void)_didResolveStillImagePTS:(SCD_Struct_BW8)arg1 isPreBracketedEV0:(BOOL)arg2 ;
-(void)_beginPreparingCapture;
-(void)_setupProcessing;
-(void)_setupStateMachineWithAllStateTransitionsHandler:(/*^block*/id)arg1 ;
-(int)commitStillImageMomentCaptureWithSettings:(id)arg1 ;
-(id)_stateMachine;
-(int)_receivedFrameOrErrorCountForCurrentRequest;
-(void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(BOOL)arg1 ;
-(void)setUsesHDRPreBracketFrameForErrorRecovery:(BOOL)arg1 ;
-(unsigned)maxNumberOfBurstCapturesAllowedInFlight;
-(void)_beginCapture;
-(void)_serviceNextRequest;
-(BOOL)_waitUntilShotBufferHasFreeBufferCount:(int)arg1 timeout:(float)arg2 ;
-(void)_didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW8)arg1 transform:(id)arg2 ;
-(void)_cancelMomentCaptureIfNeeded;
-(void)setFastCapturePrioritizationEnabled:(BOOL)arg1 ;
-(void)_beginInitiatingCapture;
-(void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2 ;
-(void)_renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 attemptToCompleteRequest:(BOOL)arg3 ;
-(void)_fireDelegateCallbackWithFlag:(unsigned)arg1 ;
-(void)_beginUncommittedMomentCapture;
-(void)_fireDelegateCallbackWithInfo:(id)arg1 ;
-(int)beginStillImageMomentCaptureWithSettings:(id)arg1 ;
-(void)_flushStillImageRequestWithError:(int)arg1 ;
-(void)_cancelMomentCapture;
-(void)setStillImageProcessingSupportProvider:(id<BWStillImageProcessingSupportProvider>)arg1 ;
-(id)_resolvePhotoManifest;
-(int)_captureTypeForSettings:(id)arg1 frameStatisticsByPortType:(id)arg2 captureFlags:(unsigned long long*)arg3 ;
-(id)_stillImageDispatchQueue;
-(void)_commitMomentCapture;
-(void)_unpackNextRequest;
-(void)captureStreamDidCompleteStillImageCapture:(id)arg1 ;
-(void)setMaxNumberOfBurstCapturesAllowedInFlight:(unsigned)arg1 ;
-(void)_beginResolvingCapture;
-(void)_completeRequestWithStatus:(int)arg1 ;
-(id)outputForPortType:(id)arg1 ;
-(void)_bufferReleased;
-(void)captureStream:(id)arg1 didCaptureReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3 ;
-(id)_clientBracketSettingsWithFrameStatisticsByPortType:(id)arg1 ;
-(void)_didResolveReferenceFrameBracketedCaptureSequenceNumber:(id)arg1 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(void)captureStreamWillBeginStillImageCapture:(id)arg1 ;
-(BOOL)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
-(id)inputForPortType:(id)arg1 ;
-(void)_addAttachmentsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(void)_beginMomentCapture;
-(void)setStillImageCaptureStatusDelegate:(id<BWStillImageCaptureStatusDelegate>)arg1 ;
@end

