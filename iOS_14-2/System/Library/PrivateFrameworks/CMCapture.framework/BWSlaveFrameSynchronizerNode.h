/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWSlaveFrameSynchronizerNode : BWNode {

	int _numEODMessagesReceived;
	os_unfair_lock_s _bufferServicingLock;
	opaqueCMSimpleQueue* _inputSampleBufferQueues;
	int _numBufferedFrames;
	BOOL _slaveStreamHasStarted;
	int _numSlaveFramesReceived;
	int _numSlaveFramesToSkip;
	BOOL _startEmittingMasterFramesBeforeSlaveStreamStarts;

}
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)_purgeAllBuffers;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 inputIndexesDrivingDepthOutput:(id)arg3 ;
-(void)_printState;
-(void)_purgeAllPurgeableBuffers;
-(void)_tryToEmitBuffers;
-(void)_emitIncomingFrameKtraces:(opaqueCMSampleBufferRef)arg1 withInput:(id)arg2 ;
-(void)dealloc;
-(id)initWithDepthEnabled:(BOOL)arg1 numberOfInputs:(int)arg2 ;
@end

