/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNodeOutputConsumer.h>

@class BWNodeInput, BWNodeOutput, BWPipelineStage, NSMutableArray, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {

	BWNodeInput* _input;
	BWNodeOutput* _output;
	BWPipelineStage* _pipelineStage;
	BOOL _stillImagePipelineStageInputHandlesMessages;
	os_unfair_lock_s _suspensionLock;
	BOOL _suspended;
	BOOL _resuming;
	BOOL _wantsMessageCachingWhileSuspended;
	BOOL _messageCachingEnabled;
	BOOL _resumedForEventsOnly;
	NSMutableArray* _messagesToPropagate;

}

@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (readonly) BWPipelineStage * pipelineStage; 
@property (assign,nonatomic) BOOL wantsMessageCachingWhileSuspended;              //@synthesize wantsMessageCachingWhileSuspended=_wantsMessageCachingWhileSuspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_requirementsArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 firstOptionalPassthroughInputOut:(id*)arg3 firstOptionalPassthroughInputAttachedMediaKeyOut:(id*)arg4 ;
+(id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(id)_connectionDescription;
-(BOOL)detach;
-(void)setWantsMessageCachingWhileSuspended:(BOOL)arg1 ;
-(BOOL)wantsMessageCachingWhileSuspended;
-(BWNodeInput *)input;
-(BWNodeOutput *)output;
-(void)suspendWithMessageCachingAllowed:(BOOL)arg1 ;
-(void)consumeMessage:(id)arg1 fromOutput:(id)arg2 ;
-(id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3 ;
-(void)resumeForEventsOnly:(BOOL)arg1 ;
-(BOOL)_resolveCommonVideoBufferFormatForAttachedMediaKey:(id)arg1 ;
-(BOOL)attach;
-(id)_outputDescription;
-(id)_inputDescription;
-(BOOL)resolveCommonBufferFormat;
-(BWPipelineStage *)pipelineStage;
-(void)dealloc;
@end

