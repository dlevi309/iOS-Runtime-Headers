/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSString;

@interface VEKProgress : NSObject {

	float _percent;
	NSString* _taskDescription;

}

@property (assign) float percent;                         //@synthesize percent=_percent - In the implementation block
@property (copy) NSString * taskDescription;              //@synthesize taskDescription=_taskDescription - In the implementation block
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)taskDescription;
-(void)setPercent:(float)arg1 ;
-(float)percent;
@end

