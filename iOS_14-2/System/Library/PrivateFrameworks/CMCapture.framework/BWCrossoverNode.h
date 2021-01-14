/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWCrossoverNode : BWNode {

	int _numEODMessagesReceived;
	os_unfair_lock_s _bufferServicingLock;

}
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(id)initWithMediaType:(unsigned)arg1 numberOfInputs:(unsigned)arg2 ;
@end

