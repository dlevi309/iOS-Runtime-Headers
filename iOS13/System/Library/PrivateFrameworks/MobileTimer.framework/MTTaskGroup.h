/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSArray;

@interface MTTaskGroup : NSObject {

	NSArray* _tasks;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) NSArray * tasks;                 //@synthesize tasks=_tasks - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)taskGroupWithTasks:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)description;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)tasks;
-(void)setTasks:(NSArray *)arg1 ;
@end

