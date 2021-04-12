/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSlaveFrameSynchronizerNode : BWNode {

	int _numEODMessagesReceived;
	os_unfair_lock_s _bufferServicingLock;
	opaqueCMSampleBuffer* _inputSampleBuffers;
	BOOL _slaveStreamHasStarted;
	int _numSlaveFramesReceived;
	int _numSlaveFramesToSkip;
	BOOL _startEmittingMasterFramesBeforeSlaveStreamStarts;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 inputIndexesDrivingDepthOutput:(id)arg3 ;
-(void)_tryToEmitBuffers;
-(void)_purgeAllBuffersOlderThanCaptureID:(int)arg1 ;
-(id)initWithDepthEnabled:(BOOL)arg1 numberOfInputs:(int)arg2 ;
-(void)_emitIncomingFrameKtraces:(opaqueCMSampleBufferRef)arg1 withInput:(id)arg2 ;
@end

