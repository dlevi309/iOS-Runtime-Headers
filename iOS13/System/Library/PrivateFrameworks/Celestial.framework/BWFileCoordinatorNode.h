/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWAudioSourceRecordingReadinessDelegate;
@class NSArray, FigCaptureRecordingSettings, BWNodeInput, BWPhotoDecompressor, BWMotionDataTimeMachine, NSMutableArray;

@interface BWFileCoordinatorNode : BWNode {

	NSArray* _stagingQueues;
	FigCaptureRecordingSettings* _settings;
	long long _currSettingsID;
	int _recordingState;
	BWNodeInput* _masterInput;
	SCD_Struct_BW2 _inputOffset;
	SCD_Struct_BW2 _lastMasterPTS;
	SCD_Struct_BW2 _lastMasterDuration;
	SCD_Struct_BW2 _lastMasterEndingPTS;
	SCD_Struct_BW2 _masterStartingPTS;
	SCD_Struct_BW2 _largestStagedSupportingAudioVideoStagedPTS;
	SCD_Struct_BW2 _largestAudioPTS;
	SCD_Struct_BW2 _largestMetadataPTS;
	SCD_Struct_BW2 _masterStoppingPTS;
	SCD_Struct_BW2 _stopRecordingPTS;
	SCD_Struct_BW2 _stopRecordingAudioOffset;
	SCD_Struct_BW2 _stopRecordingObservedEndingPTS;
	SCD_Struct_BW2 _focusWaitTimeStart;
	SCD_Struct_BW2 _torchWaitTimeStart;
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
	BOOL _lowLatencyModeEnabled;
	BOOL _flagsLastFrameForVideoCompressor;
	BOOL _overCaptureEnabled;
	BOOL _overCaptureIsRequested;
	BOOL _overCaptureActiveSlaveStreamForcedOff;
	BOOL _attachOverCaptureActiveSlaveStreamForcedOffMarkerBuffer;
	SCD_Struct_BW2 _firstAudioPTSReadyForRecording;
	id<BWAudioSourceRecordingReadinessDelegate> _audioSourceDelegate;
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
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(void)recordingTerminated:(long long)arg1 ;
-(void)tryToEmitFramesWaitingForMotion;
-(BOOL)updateStopPTS:(SCD_Struct_BW2)arg1 audioOffset:(SCD_Struct_BW2)arg2 previousStopPTS:(SCD_Struct_BW2*)arg3 previousAudioOffset:(SCD_Struct_BW2*)arg4 ;
-(int)startRecordingWithSettings:(id)arg1 stopAtPTS:(SCD_Struct_BW2)arg2 ;
-(void)cancelStartRecordingWithSettings:(id)arg1 ;
-(void)stopRecordingWithErrorCode:(int)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 overCaptureEnabled:(BOOL)arg5 allowLowLatencyWhenPossible:(BOOL)arg6 motionDataTimeMachine:(id)arg7 ;
-(void)_finishStoppingOrPausing:(BOOL)arg1 withErrorCode:(int)arg2 ;
-(void)_stopRecordingWithErrorCode:(int)arg1 ;
-(void)_doStartingToRecordWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_emitOrQueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 toOutput:(id)arg3 stoppingOrPausing:(BOOL)arg4 ;
-(opaqueCMSampleBufferRef)_copyFirstValidLowLatencyAudioBuffer:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_doStoppingOrPausingWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_setRecordingState:(int)arg1 ;
-(void)_prepareToStartRecordingWithSettings:(id)arg1 ;
-(void)_completeTransitionToNotRecording;
-(void)_prepareToPauseOrStopRecording;
-(void)_prepareToResumeRecording;
-(void)_emitMarkerBufferForFileWriterAction:(CFStringRef)arg1 withPTS:(SCD_Struct_BW2)arg2 settings:(id)arg3 errorCode:(int)arg4 ;
-(void)_emitSampleBuffersWaitingForMotionData;
-(void)_addLookAheadMotionDataToMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 lookAheadMotionData:(id)arg2 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 toOutput:(id)arg3 ;
-(void)_addFlushingFutureCinematicMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_cinematicFutureMetadataForFlushingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_prepareOverCaptureVideoBufferForEmission:(opaqueCMSampleBufferRef)arg1 emissionTimeStamp:(id)arg2 ;
-(opaqueCMSampleBufferRef)_createEmptyMetadataSBufWithPTS:(SCD_Struct_BW2)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_attachFileCompletionThumbnailSourcePixelBufferAttachmentsToSettingsBuffer:(opaqueCMSampleBufferRef)arg1 forSourceBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_emitStagedBufferForIndex:(unsigned long long)arg1 stoppingOrPausing:(BOOL)arg2 ;
-(void)_flushSampleBuffersWaitingForMotionData;
-(BOOL)_isPixelTransferSupportedForBuffer:(CVBufferRef)arg1 ;
-(void)setFlagsLastFrameForVideoCompressor:(BOOL)arg1 ;
-(BOOL)flagsLastFrameForVideoCompressor;
-(void)setAudioSourceDelegate:(id)arg1 ;
-(id)audioSourceDelegate;
-(void)setCinematicLookAheadFrameCount:(int)arg1 ;
-(int)cinematicLookAheadFrameCount;
@end

