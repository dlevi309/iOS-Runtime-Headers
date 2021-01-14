/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext, UIKeyboardTaskEntry, NSArray;

@interface UIKeyboardTaskQueue : NSObject {

	BOOL _executingOnMainThread;
	NSConditionLock* _lock;
	NSMutableArray* _tasks;
	NSMutableArray* _deferredTasks;
	UIKeyboardTaskExecutionContext* _executionContext;
	UIKeyboardTaskEntry* _mainThreadContinuation;
	NSArray* _activeOriginator;

}

@property (nonatomic,retain) UIKeyboardTaskExecutionContext * executionContext;              //@synthesize executionContext=_executionContext - In the implementation block
@property (nonatomic,retain) NSArray * activeOriginator;                                     //@synthesize activeOriginator=_activeOriginator - In the implementation block
-(void)addTask:(/*^block*/id)arg1 ;
-(void)unlock;
-(UIKeyboardTaskExecutionContext *)executionContext;
-(void)setExecutionContext:(UIKeyboardTaskExecutionContext *)arg1 ;
-(void)finishExecution;
-(BOOL)tryLockWhenReadyForMainThread;
-(id)init;
-(BOOL)isMainThreadExecutingTask;
-(NSArray *)activeOriginator;
-(id)addAndReturnTask:(/*^block*/id)arg1 ;
-(void)lock;
-(void)performSingleTask:(/*^block*/id)arg1 ;
-(void)setActiveOriginator:(NSArray *)arg1 ;
-(void)performTask:(/*^block*/id)arg1 ;
-(void)performTaskOnMainThread:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)performDeferredTaskIfIdle;
-(void)promoteDeferredTaskIfIdle;
-(void)lockWhenReadyForMainThread;
-(void)waitUntilTaskIsFinished:(id)arg1 ;
-(void)addDeferredTask:(/*^block*/id)arg1 ;
-(void)continueExecutionOnMainThread;
-(void)waitUntilAllTasksAreFinished;
-(id)scheduleTask:(/*^block*/id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 ;
-(void)dealloc;
@end

