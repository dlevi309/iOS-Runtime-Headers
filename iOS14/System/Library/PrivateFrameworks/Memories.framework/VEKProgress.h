/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSString;

@interface VEKProgress : NSObject {

	float _percent;
	NSString* _taskDescription;
	NSString* _stageDescription;

}

@property (assign) float percent;                          //@synthesize percent=_percent - In the implementation block
@property (copy) NSString * taskDescription;               //@synthesize taskDescription=_taskDescription - In the implementation block
@property (copy) NSString * stageDescription;              //@synthesize stageDescription=_stageDescription - In the implementation block
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)taskDescription;
-(float)percent;
-(void)setPercent:(float)arg1 ;
-(void)setStageDescription:(NSString *)arg1 ;
-(NSString *)stageDescription;
@end

