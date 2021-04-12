/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSString;

@interface BWPipelineStage : NSObject {

	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_group> _executionGroup;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _inputsForQueuedMessages;
	NSString* _name;
	unsigned _priority;
	BOOL _stillImagePipelineStage;
	NSString* _stillImagePipelineStageEntryNodeName;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL stillImagePipelineStage;                                 //@synthesize stillImagePipelineStage=_stillImagePipelineStage - In the implementation block
@property (nonatomic,readonly) NSString * stillImagePipelineStageEntryNodeName;              //@synthesize stillImagePipelineStageEntryNodeName=_stillImagePipelineStageEntryNodeName - In the implementation block
+(void)initialize;
+(void)_setCurrentPipelineStage:(id)arg1 ;
+(id)_currentPipelineStage;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 priority:(unsigned)arg2 ;
-(id)_initStillImagePipelineStageWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
-(id)_initWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
-(void)_serviceQueuedMessages;
-(NSString *)name;
-(BOOL)stillImagePipelineStage;
-(id)description;
-(NSString *)stillImagePipelineStageEntryNodeName;
-(void)sendMessage:(id)arg1 toInput:(id)arg2 ;
-(void)sendMessagesToInput:(id)arg1 messageProvider:(/*^block*/id)arg2 ;
-(BOOL)_isCurrentPipelineStage;
-(unsigned)priority;
-(void)dealloc;
@end

