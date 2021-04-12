/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)tasks;
-(id)description;
-(void)setTasks:(NSArray *)arg1 ;
@end

