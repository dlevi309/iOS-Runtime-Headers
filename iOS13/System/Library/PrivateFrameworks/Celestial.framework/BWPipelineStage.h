/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
+(id)_currentPipelineStage;
+(void)_setCurrentPipelineStage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned)priority;
-(BOOL)stillImagePipelineStage;
-(NSString *)stillImagePipelineStageEntryNodeName;
-(void)sendMessage:(id)arg1 toInput:(id)arg2 ;
-(id)_initWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
-(id)_initStillImagePipelineStageWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
-(BOOL)_isCurrentPipelineStage;
-(void)_serviceQueuedMessages;
@end

