/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol BWIrisStagingNodeIrisRequestDelegate, OS_dispatch_group;
@class NSURL, NSMutableArray, FigIrisAutoTrimmer, BWMotionDataPreserver, BWIrisSequenceAdjuster, BWMotionDataTimeMachine, BWIntermediateJPEGCompressor, NSDictionary, NSObject, NSString, BWStats, BWLimitedGMErrorLogger;

@interface BWIrisStagingNode : BWNode {

	SCD_Struct_BW8 _bufferingTime;
	SCD_Struct_BW8 _targetFrameDuration;
	SCD_Struct_BW8 _beginIrisMovieCaptureTime;
	SCD_Struct_BW8 _endIrisMovieCaptureTime;
	BOOL _compressSynchronizedSlaveAttachedMedia;
	SCD_Struct_BW8 _frameGovernorNextFrameThreshold;
	SCD_Struct_BW8 _frameGovernorReferenceTime;
	SCD_Struct_BW8 _readyToEmitPTS;
	SCD_Struct_BW8 _lastProcessedVideoPTS;
	SCD_Struct_BW8 _masterMovieStartPTS;
	NSURL* _temporaryMovieDirectoryURL;
	NSURL* _masterMovieURL;
	NSURL* _spatialOverCaptureMasterMovieURL;
	NSMutableArray* _stagingQueues;
	NSMutableArray* _lastEmittedBuffers;
	BOOL _valveOpen;
	BOOL _finishingAllEnqueuedRequests;
	BOOL _valveDraining;
	BOOL _emittedFirstAudio;
	long long _valveOpenerSettingsID;
	NSMutableArray* _irisRequestsInFlight;
	NSMutableArray* _irisRequestsSoonToBeEmitted;
	int _emittedIrisRequestCount;
	OpaqueFigSimpleMutexRef _stateMutex;
	SCD_Struct_BW8* _firstEmittedPTSArray;
	OpaqueCMClockRef _masterClock;
	int _trimMethod;
	BOOL _vitalityScoringEnabled;
	SCD_Struct_BW57 _vitalityScoringSmartCameraPipelineVersion;
	FigIrisAutoTrimmer* _trimmer;
	SCD_Struct_BW8 _firstTrimStartPTS;
	unsigned long long _inferencesInputIndex;
	BWMotionDataPreserver* _motionDataPreserver;
	BWIrisSequenceAdjuster* _sequenceAdjusterBackingStore;
	BWIrisSequenceAdjuster* _sequenceAdjuster;
	BWMotionDataTimeMachine* _motionDataTimeMachine;
	int _visMotionMetadataPreloadingMode;
	int _numEODMessagesReceived;
	id<BWIrisStagingNodeIrisRequestDelegate> _delegate;
	unsigned long long _compressedBufferPoolAllocationTimeoutMS;
	float _intermediateJPEGCompressionQuality;
	float _intermediateJPEGCompressionRate;
	int _intermediateJPEGDownstreamRetainedBufferCount;
	int _intermediateJPEGSurfaceLocalRetainedBufferCount;
	int _additionalCompressedBufferCount;
	BWIntermediateJPEGCompressor* _intermediateJPEGCompressor;
	BWIntermediateJPEGCompressor* _synchronizedSlaveJPEGCompressor;
	BOOL _doingJPEGCompression;
	NSDictionary* _cameraInfoByPortType;
	BOOL _haveSeenFirstAudioSampleBuffer;
	BOOL _haveSeenFirstVideoSampleBuffer;
	BOOL _readyToReceiveRequests;
	NSObject*<OS_dispatch_group> _readyToReceiveRequestsGroup;
	float _videoStabilizationOverscanOverride;
	BOOL _captureDeviceHasOverCaptureEnabled;
	float _spatialOverCapturePercentageToApply;
	NSString* _recommendedMasterPortType;
	SCD_Struct_BW8 _lastReceivedVideoTime;
	BWStats* _overallVideoFrameReceptionStats;
	BWStats* _valveActiveVideoFrameReceptionStats;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (readonly) NSURL * temporaryMovieDirectoryURL; 
@property (readonly) BWMotionDataTimeMachine * motionDataTimeMachine; 
@property (assign) SCD_Struct_BW8 beginIrisMovieCaptureTime; 
@property (assign) SCD_Struct_BW8 endIrisMovieCaptureTime; 
+(void)initialize;
-(OpaqueCMClockRef)masterClock;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)setTargetFrameDuration:(SCD_Struct_BW8)arg1 ;
-(BWMotionDataTimeMachine *)motionDataTimeMachine;
-(void)setStagingQueues:(id)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setBufferingTime:(SCD_Struct_BW8)arg1 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW8)arg1 ;
-(void)_emitIrisRequest:(id)arg1 withEndTime:(SCD_Struct_BW8)arg2 ;
-(void)_feedTrimmerWithVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)_serviceIrisRequestsForCurrentTime:(SCD_Struct_BW8)arg1 emitBuffers:(BOOL)arg2 ensureStillImageTimesAreStaged:(BOOL)arg3 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_updateRetainedBufferCount;
-(SCD_Struct_BW8)_adjustedStartTimeForTrimmedStartTime:(SCD_Struct_BW8)arg1 ensuringAtLeast3FramesBeforeStillTime:(SCD_Struct_BW8)arg2 ensuringFrameIsAfterTrimmedStartTime:(BOOL)arg3 butNotEarlierThanOriginalStartTime:(SCD_Struct_BW8)arg4 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(SCD_Struct_BW8)arg1 inputIndex:(unsigned long long)arg2 applyFrameDropsMitigation:(BOOL)arg3 ;
-(void)prepareToFinishAllEnqueuedIrisRequestsWithEndTime:(SCD_Struct_BW8)arg1 ;
-(void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(SCD_Struct_BW8)arg1 ;
-(BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1 ;
-(SCD_Struct_BW57)vitalityScoringSmartCameraPipelineVersion;
-(void)_feedTrimmerWithInferencesSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(unsigned long long)_emittingInputsCount;
-(SCD_Struct_BW8)movieStopPTSForIrisRequest:(id)arg1 ;
-(SCD_Struct_BW8)targetFrameDuration;
-(void)_prepareToEmitFramesFromStartTime:(SCD_Struct_BW8)arg1 throughEndTime:(SCD_Struct_BW8)arg2 ;
-(void)setIntermediateJPEGDownstreamRetainedBufferCount:(int)arg1 ;
-(SCD_Struct_BW8)_earliestAllowedStillHostPTS;
-(BOOL)valveIsOpen;
-(void)setMomentCaptureMovieRecordingMasterEndTime:(SCD_Struct_BW8)arg1 forRequestWithSettingsID:(long long)arg2 ;
-(NSURL *)temporaryMovieDirectoryURL;
-(void)_enqueueIrisRequest:(id)arg1 ;
-(void)_emitIrisRequestsOlderThanTime:(SCD_Struct_BW8)arg1 withEndTime:(SCD_Struct_BW8)arg2 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 vitalityScoringEnabled:(BOOL)arg5 captureDeviceHasOverCaptureEnabled:(BOOL)arg6 overCaptureEnabled:(BOOL)arg7 depthEnabled:(BOOL)arg8 videoStabilizationOverscanOverride:(float)arg9 sequenceAdjusterEnabled:(BOOL)arg10 visMotionMetadataPreloadingMode:(int)arg11 intermediateJPEGCompressionQuality:(float)arg12 intermediateJPEGCompressionRate:(float)arg13 temporaryMovieDirectoryURL:(id)arg14 cameraInfoByPortType:(id)arg15 irisRequestDelegate:(id)arg16 ;
-(SCD_Struct_BW8)beginIrisMovieCaptureTime;
-(int)intermediateJPEGDownstreamRetainedBufferCount;
-(unsigned long long)_indexOfBufferBeforeOrEqualToHostPTS:(SCD_Struct_BW8)arg1 inputIndex:(unsigned long long)arg2 tolerance:(SCD_Struct_BW8)arg3 ;
-(int)_emitBuffersThroughPTS:(SCD_Struct_BW8)arg1 forInputIndex:(unsigned long long)arg2 inOutBufferIndex:(unsigned long long*)arg3 bufferCount:(unsigned long long)arg4 ;
-(void)_processQueuedVideoFrames;
-(void)_trimQueueForInputIndex:(unsigned long long)arg1 ;
-(BOOL)_haveEnoughVideoStagedToStartFirstIrisRecording:(id)arg1 currentTime:(SCD_Struct_BW8)arg2 ;
-(void)setBeginIrisMovieCaptureTime:(SCD_Struct_BW8)arg1 ;
-(float)_appliedZoomFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)enqueueIrisRequest:(id)arg1 ;
-(BOOL)waitUntilReadyToReceiveRequestsWithTimeout:(float)arg1 ;
-(SCD_Struct_BW8)_maxPTSForIrisRequest:(id)arg1 ;
-(SCD_Struct_BW8)endIrisMovieCaptureTime;
-(BOOL)_spatialOverCaptureRecordingInProgress;
-(SCD_Struct_BW8)bufferingTime;
-(void)setEndIrisMovieCaptureTime:(SCD_Struct_BW8)arg1 ;
-(int)openValveWithIrisRequest:(id)arg1 ;
-(int)_emissionStatusForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_tagStillImageVISKeyFrames;
-(SCD_Struct_BW8)_hostPTSForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitIrisMovieRequestWithInfo:(id)arg1 ;
-(BOOL)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(SCD_Struct_BW8)arg1 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(id)_temporaryURLForIrisWithSettingsID:(long long)arg1 isOriginalRecording:(BOOL)arg2 ;
-(void)closeValve;
-(void)dealloc;
-(void)setVitalityScoringSmartCameraPipelineVersion:(SCD_Struct_BW57)arg1 ;
-(BOOL)_momentCaptureMovieRecordingInProgress;
@end

