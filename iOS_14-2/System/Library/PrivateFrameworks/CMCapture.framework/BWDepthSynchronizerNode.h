/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSMutableArray, BWNodeInput, BWNodeError;

@interface BWDepthSynchronizerNode : BWNode {

	int _numEODMessagesReceived;
	NSMutableArray* _imageBufferQueue;
	NSMutableArray* _depthBufferQueue;
	int _maxQueueDepth;
	int _lastEmittedFrameCaptureID;
	int _lastReceivedImageID;
	int _lastReceivedDepthID;
	int _imageIDWrapAroundCounter;
	int _depthIDWrapAroundCounter;
	BOOL _discardsDegradedDepthBuffers;
	BOOL _separateDepthComponentsEnabled;
	BWNodeInput* _imageInput;
	BWNodeInput* _depthInput;
	BOOL _streaming;
	BWNodeError* _errorForImageInput;
	BWNodeError* _errorForDepthInput;
	os_unfair_lock_s _bufferServicingLock;

}

@property (readonly) BWNodeInput * imageInput;                               //@synthesize imageInput=_imageInput - In the implementation block
@property (readonly) BWNodeInput * depthInput;                               //@synthesize depthInput=_depthInput - In the implementation block
@property (assign,nonatomic) BOOL discardsDegradedDepthBuffers; 
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 inputAttachedMediaKey:(id)arg2 outputAttachedMediaKey:(id)arg3 ;
-(BOOL)_isDepthExpectedForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_frameCaptureID:(opaqueCMSampleBufferRef)arg1 ;
-(void)_cleanupDepthBufferQueue;
-(id)nodeType;
-(BOOL)_attachDepthDataToSampleBufferOrReportDepthMissing:(opaqueCMSampleBufferRef)arg1 isDepthMissing:(BOOL*)arg2 ;
-(BOOL)discardsDegradedDepthBuffers;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)_tryToEmitBuffers;
-(BWNodeInput *)imageInput;
-(id)_bufferArrayToString:(id)arg1 ;
-(BWNodeInput *)depthInput;
-(id)initForStreaming:(BOOL)arg1 separateDepthComponentsEnabled:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDiscardsDegradedDepthBuffers:(BOOL)arg1 ;
@end

