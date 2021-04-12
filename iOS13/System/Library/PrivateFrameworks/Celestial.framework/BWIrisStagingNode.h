/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWIrisStagingNodeIrisRequestDelegate, OS_dispatch_group;
@class NSURL, NSMutableArray, FigIrisAutoTrimmer, BWMotionDataPreserver, BWIrisSequenceAdjuster, BWMotionDataTimeMachine, BWIntermediateJPEGCompressor, NSDictionary, NSObject, NSString, BWStats;

@interface BWIrisStagingNode : BWNode {

	SCD_Struct_BW2 _bufferingTime;
	SCD_Struct_BW2 _targetFrameDuration;
	SCD_Struct_BW2 _beginIrisMovieCaptureTime;
	SCD_Struct_BW2 _endIrisMovieCaptureTime;
	BOOL _compressSynchronizedSlaveAttachedMedia;
	SCD_Struct_BW2 _frameGovernorNextFrameThreshold;
	SCD_Struct_BW2 _frameGovernorReferenceTime;
	SCD_Struct_BW2 _readyToEmitPTS;
	SCD_Struct_BW2 _lastProcessedVideoPTS;
	SCD_Struct_BW2 _masterMovieStartPTS;
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
	SCD_Struct_BW2* _firstEmittedPTSArray;
	OpaqueCMClockRef _masterClock;
	int _trimMethod;
	BOOL _vitalityScoringEnabled;
	SCD_Struct_BW94 _vitalityScoringSmartCameraPipelineVersion;
	FigIrisAutoTrimmer* _trimmer;
	SCD_Struct_BW2 _firstTrimStartPTS;
	unsigned long long _inferencesInputIndex;
	BWMotionDataPreserver* _motionDataPreserver;
	BWIrisSequenceAdjuster* _sequenceAdjuster;
	BWMotionDataTimeMachine* _motionDataTimeMachine;
	int _visMotionMetadataPreloadingMode;
	int _numEODMessagesReceived;
	id<BWIrisStagingNodeIrisRequestDelegate> _delegate;
	float _intermediateJPEGCompressionQuality;
	float _intermediateJPEGCompressionRate;
	int _intermediateJPEGDownstreamRetainedBufferCount;
	int _intermediateJPEGSurfaceLocalRetainedBufferCount;
	BWIntermediateJPEGCompressor* _intermediateJPEGCompressor;
	BWIntermediateJPEGCompressor* _synchronizedSlaveJPEGCompressor;
	BOOL _doingJPEGCompression;
	NSDictionary* _cameraInfoByPortType;
	BOOL _haveSeenFirstAudioSampleBuffer;
	BOOL _haveSeenFirstVideoSampleBuffer;
	BOOL _readyToReceiveRequests;
	NSObject*<OS_dispatch_group> _readyToReceiveRequestsGroup;
	float _videoStabilizationOverscanOverride;
	float _spatialOverCapturePercentageToApply;
	NSString* _recommendedMasterPortType;
	SCD_Struct_BW2 _lastReceivedVideoTime;
	BWStats* _overallVideoFrameReceptionStats;
	BWStats* _valveActiveVideoFrameReceptionStats;

}

@property (readonly) NSURL * temporaryMovieDirectoryURL; 
@property (readonly) BWMotionDataTimeMachine * motionDataTimeMachine; 
@property (assign) SCD_Struct_BW2 beginIrisMovieCaptureTime; 
@property (assign) SCD_Struct_BW2 endIrisMovieCaptureTime; 
+(void)initialize;
-(void)dealloc;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)closeValve;
-(SCD_Struct_BW2)movieStopPTSForIrisRequest:(id)arg1 ;
-(BOOL)openValveWithIrisRequest:(id)arg1 ;
-(int)enqueueIrisRequest:(id)arg1 ;
-(void)prepareToFinishAllEnqueuedIrisRequestsWithEndTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)endIrisMovieCaptureTime;
-(void)setBeginIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(void)setEndIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(BOOL)waitUntilReadyToReceiveRequestsWithTimeout:(float)arg1 ;
-(void)setMomentCaptureMovieRecordingMasterEndTime:(SCD_Struct_BW2)arg1 forRequestWithSettingsID:(long long)arg2 ;
-(SCD_Struct_BW2)targetFrameDuration;
-(void)setVitalityScoringSmartCameraPipelineVersion:(SCD_Struct_BW94)arg1 ;
-(void)_serviceIrisRequestsForCurrentTime:(SCD_Struct_BW2)arg1 emitBuffers:(BOOL)arg2 ensureStillImageTimesAreStaged:(BOOL)arg3 ;
-(void)_emitIrisRequest:(id)arg1 withEndTime:(SCD_Struct_BW2)arg2 ;
-(float)_appliedZoomFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_feedTrimmerWithVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_feedTrimmerWithInferencesSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW2)_earliestAllowedStillHostPTS;
-(void)_trimQueueForInputIndex:(unsigned long long)arg1 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(unsigned long long)_emittingInputsCount;
-(void)_enqueueIrisRequest:(id)arg1 ;
-(BOOL)_momentCaptureMovieRecordingInProgress;
-(BOOL)_spatialOverCaptureRecordingInProgress;
-(void)_updateRetainedBufferCount;
-(id)_temporaryURLForIrisWithSettingsID:(long long)arg1 isOriginalRecording:(BOOL)arg2 ;
-(SCD_Struct_BW2)_hostPTSForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 ;
-(int)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 forInputIndex:(unsigned long long)arg2 inOutBufferIndex:(unsigned long long*)arg3 bufferCount:(unsigned long long)arg4 ;
-(int)_emissionStatusForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitIrisRequestsOlderThanTime:(SCD_Struct_BW2)arg1 withEndTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)_maxPTSForIrisRequest:(id)arg1 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(SCD_Struct_BW2)arg1 inputIndex:(unsigned long long)arg2 ;
-(SCD_Struct_BW2)_adjustedStartTimeForTrimmedStartTime:(SCD_Struct_BW2)arg1 ensuringAtLeast3FramesBeforeStillTime:(SCD_Struct_BW2)arg2 ensuringFrameIsAfterTrimmedStartTime:(BOOL)arg3 butNotEarlierThanOriginalStartTime:(SCD_Struct_BW2)arg4 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToHostPTS:(SCD_Struct_BW2)arg1 inputIndex:(unsigned long long)arg2 tolerance:(SCD_Struct_BW2)arg3 ;
-(BOOL)_haveEnoughVideoStagedToStartFirstIrisRecording:(id)arg1 currentTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1 ;
-(void)_prepareToEmitFramesFromStartTime:(SCD_Struct_BW2)arg1 throughEndTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(SCD_Struct_BW2)arg1 ;
-(void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(SCD_Struct_BW2)arg1 ;
-(void)_tagStillImageVISKeyFrames;
-(void)_processQueuedVideoFrames;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 vitalityScoringEnabled:(BOOL)arg5 overCaptureEnabled:(BOOL)arg6 depthEnabled:(BOOL)arg7 videoStabilizationOverscanOverride:(float)arg8 sequenceAdjusterEnabled:(BOOL)arg9 visMotionMetadataPreloadingMode:(int)arg10 intermediateJPEGCompressionQuality:(float)arg11 intermediateJPEGCompressionRate:(float)arg12 temporaryMovieDirectoryURL:(id)arg13 cameraInfoByPortType:(id)arg14 irisRequestDelegate:(id)arg15 ;
-(SCD_Struct_BW2)beginIrisMovieCaptureTime;
-(NSURL *)temporaryMovieDirectoryURL;
-(BWMotionDataTimeMachine *)motionDataTimeMachine;
-(void)setTargetFrameDuration:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)bufferingTime;
-(void)setBufferingTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW94)vitalityScoringSmartCameraPipelineVersion;
-(int)intermediateJPEGDownstreamRetainedBufferCount;
-(void)setIntermediateJPEGDownstreamRetainedBufferCount:(int)arg1 ;
@end

