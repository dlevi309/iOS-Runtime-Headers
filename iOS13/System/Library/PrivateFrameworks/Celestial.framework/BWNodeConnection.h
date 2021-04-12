/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWNodeOutputConsumer.h>

@class BWNodeInput, BWNodeOutput, BWPipelineStage, BWNodeMessage, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {

	BWNodeInput* _input;
	BWNodeOutput* _output;
	BWPipelineStage* _pipelineStage;
	BOOL _stillImagePipelineStageInputHandlesMessages;
	os_unfair_lock_s _suspensionLock;
	BOOL _suspended;
	BOOL _resumedByClient;
	BOOL _resumedForEventsOnly;
	BWNodeMessage* _configLiveMessageToPropagate;

}

@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (readonly) BWPipelineStage * pipelineStage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_requirementsArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id*)arg3 ;
+(id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id*)arg3 ;
-(void)dealloc;
-(void)suspend;
-(BWNodeInput *)input;
-(id)_inputDescription;
-(id)_outputDescription;
-(BOOL)detach;
-(BOOL)attach;
-(BWNodeOutput *)output;
-(void)consumeMessage:(id)arg1 fromOutput:(id)arg2 ;
-(BWPipelineStage *)pipelineStage;
-(BOOL)_resolveCommonVideoBufferFormatForAttachedMediaKey:(id)arg1 ;
-(id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3 ;
-(BOOL)resolveCommonBufferFormat;
-(void)resumeForEventsOnly:(BOOL)arg1 ;
-(id)_connectionDescription;
@end

