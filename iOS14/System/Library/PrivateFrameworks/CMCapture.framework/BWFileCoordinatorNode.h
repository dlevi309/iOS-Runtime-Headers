/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol BWAudioSourceRecordingReadinessDelegate, BWNodeFileCoordinatorStatusDelegate;
@class NSArray, NSMutableArray, FigCaptureRecordingSettings, NSDictionary, BWNodeInput, BWPhotoDecompressor, BWMotionDataTimeMachine;

@interface BWFileCoordinatorNode : BWNode {

	NSArray* _stagingQueues;
	NSMutableArray* _pendingIrisRequestMarkerBuffers;
	FigCaptureRecordingSettings* _settings;
	long long _currSettingsID;
	BOOL _currSettingsIsIris;
	NSDictionary* _videoSettings;
	float _maxFrameRate;
	int _recordingState;
	BWNodeInput* _masterInput;
	SCD_Struct_BW8 _inputOffset;
	SCD_Struct_BW8 _lastMasterPTS;
	SCD_Struct_BW8 _lastMasterDuration;
	SCD_Struct_BW8 _lastMasterEndingPTS;
	SCD_Struct_BW8 _masterStartingPTS;
	SCD_Struct_BW8 _largestStagedSupportingAudioVideoStagedPTS;
	SCD_Struct_BW8 _largestAudioPTS;
	SCD_Struct_BW8 _largestMetadataPTS;
	SCD_Struct_BW8 _masterStoppingPTS;
	SCD_Struct_BW8 _stopRecordingPTS;
	SCD_Struct_BW8 _stopRecordingAudioOffset;
	SCD_Struct_BW8 _stopRecordingObservedEndingPTS;
	SCD_Struct_BW8 _focusWaitTimeStart;
	SCD_Struct_BW8 _torchWaitTimeStart;
	double _focusWaitTime;
	double _torchWaitTime;
	int _numberOfCoarseFocusWaitBuffersDropped;
	int _numberOfTorchWaitBuffersDropped;
	BOOL _sendFlushMarkerWhenStopping;
	BOOL _haveSeenAudioWhenStarting;
	BOOL _lowLatencyCanTransitionEarlyToRecording;
	BOOL _lowLatencyCanTossExtraVideoWhenStopping;
	BOOL _firstAudioHasBeenProcessed;
	int _terminationErrorCode;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	const opaqueCMFormatDescription* _formatDescriptionsForInputs;
	OpaqueFigSimpleMutexRef _stateMutex;
	unsigned long long _numInputs;
	unsigned long long _numOutputs;
	unsigned long long _numVideoInputs;
	unsigned long long _numAudioInputs;
	unsigned long long _numMetadataInputs;
	unsigned long long _numActionOnlyOutputs;
	unsigned long long _masterInputIndex;
	NSMutableArray* _idleInputIndicesWaitingForFlush;
	BOOL _lowLatencyModeEnabled;
	BOOL _flagsLastFrameForVideoCompressor;
	BOOL _overCaptureEnabled;
	BOOL _overCaptureIsRequested;
	BOOL _overCaptureActiveSlaveStreamForcedOff;
	BOOL _attachOverCaptureActiveSlaveStreamForcedOffMarkerBuffer;
	SCD_Struct_BW8 _firstAudioPTSReadyForRecording;
	id<BWAudioSourceRecordingReadinessDelegate> _audioSourceDelegate;
	id<BWNodeFileCoordinatorStatusDelegate> _fileCoordiatorStatusDelegate;
	BWPhotoDecompressor* _thumbnailDecompressor;
	BWMotionDataTimeMachine* _motionDataTimeMachine;
	NSMutableArray* _videoSampleBuffersWaitingForMetadata;
	unsigned long long _cinematicLookAheadFrameCount;
	unsigned long long _pendingMotionDataSerialNumber;
	unsigned long long _largestEmittedLookAheadMotionDataSerialNumber;
	BOOL _lookAheadMotionDataPreloadHasBeenAttached;
	BOOL _receivedFinalEnqueuedIrisReferenceRequest;

}
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)_handleIrisMovieRequest:(id)arg1 input:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(BOOL)updateStopPTS:(SCD_Struct_BW8)arg1 audioOffset:(SCD_Struct_BW8)arg2 previousStopPTS:(SCD_Struct_BW8*)arg3 previousAudioOffset:(SCD_Struct_BW8*)arg4 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)_addLookAheadMotionDataToMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 lookAheadMotionData:(id)arg2 ;
-(id)init;
-(BOOL)_isPixelTransferSupportedForBuffer:(CVBufferRef)arg1 ;
-(void)setAudioSourceDelegate:(id)arg1 ;
-(void)_setRecordingState:(int)arg1 ;
-(void)resumeRecording;
-(void)cancelStartRecordingWithSettings:(id)arg1 ;
-(opaqueCMSampleBufferRef)_copyFirstValidLowLatencyAudioBuffer:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW8)arg3 ;
-(id)fileCoordiatorStatusDelegate;
-(int)cinematicLookAheadFrameCount;
-(void)_addFlushingFutureCinematicMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_cinematicFutureMetadataForFlushingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)tryToEmitFramesWaitingForMotion;
-(void)pauseRecording;
-(void)_prepareToPauseOrStopRecording;
-(void)_flushSampleBuffersWaitingForMotionData;
-(BOOL)flagsLastFrameForVideoCompressor;
-(void)_releaseSettings;
-(void)_doStoppingOrPausingWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW8)arg3 ;
-(void)recordingTerminated:(long long)arg1 ;
-(void)_prepareOverCaptureVideoBufferForEmission:(opaqueCMSampleBufferRef)arg1 emissionTimeStamp:(id)arg2 ;
-(void)_stopRecordingWithErrorCode:(int)arg1 ;
-(void)_completeTransitionToNotRecording;
-(id)_irisMovieInfosFromPendingIrisRequestMarkerBuffers;
-(int)startRecordingWithSettings:(id)arg1 videoSettings:(id)arg2 maxFrameRate:(float)arg3 stopAtPTS:(SCD_Struct_BW8)arg4 ;
-(void)_doStartingToRecordWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW8)arg3 ;
-(void)_attachFileCompletionThumbnailSourcePixelBufferAttachmentsToSettingsBuffer:(opaqueCMSampleBufferRef)arg1 forSourceBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_emitMarkerBufferForFileWriterAction:(CFStringRef)arg1 withPTS:(SCD_Struct_BW8)arg2 settings:(id)arg3 settingsID:(unsigned long long)arg4 errorCode:(int)arg5 ;
-(void)_prepareToResumeRecording;
-(void)_emitOrQueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 toOutput:(id)arg3 stoppingOrPausing:(BOOL)arg4 ;
-(void)_emitStagedBufferForIndex:(unsigned long long)arg1 stoppingOrPausing:(BOOL)arg2 ;
-(void)setFlagsLastFrameForVideoCompressor:(BOOL)arg1 ;
-(void)setFileCoordiatorStatusDelegate:(id)arg1 ;
-(void)_flushPendingIrisRequestMarkerBuffers;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 overCaptureEnabled:(BOOL)arg5 allowLowLatencyWhenPossible:(BOOL)arg6 motionDataTimeMachine:(id)arg7 ;
-(opaqueCMSampleBufferRef)_createEmptyMetadataSBufWithPTS:(SCD_Struct_BW8)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)setCinematicLookAheadFrameCount:(int)arg1 ;
-(void)stopRecordingWithErrorCode:(int)arg1 ;
-(void)_performFlushAction;
-(void)_finishStoppingOrPausing:(BOOL)arg1 withErrorCode:(int)arg2 ;
-(id)audioSourceDelegate;
-(void)_emitSampleBuffersWaitingForMotionData;
-(void)_prepareToStartRecordingWithSettings:(id)arg1 videoSettings:(id)arg2 maxFrameRate:(float)arg3 ;
-(void)_clearPendingIrisRequestMarkerBuffers;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 toOutput:(id)arg3 ;
-(void)dealloc;
@end

