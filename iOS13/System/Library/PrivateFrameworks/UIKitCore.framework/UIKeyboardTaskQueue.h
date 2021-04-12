/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)addTask:(/*^block*/id)arg1 ;
-(void)performSingleTask:(/*^block*/id)arg1 ;
-(void)waitUntilAllTasksAreFinished;
-(void)performTask:(/*^block*/id)arg1 ;
-(void)addDeferredTask:(/*^block*/id)arg1 ;
-(BOOL)isMainThreadExecutingTask;
-(id)scheduleTask:(/*^block*/id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 ;
-(UIKeyboardTaskExecutionContext *)executionContext;
-(void)setExecutionContext:(UIKeyboardTaskExecutionContext *)arg1 ;
-(void)finishExecution;
-(void)performTaskOnMainThread:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(NSArray *)activeOriginator;
-(void)continueExecutionOnMainThread;
-(BOOL)tryLockWhenReadyForMainThread;
-(void)setActiveOriginator:(NSArray *)arg1 ;
-(void)performDeferredTaskIfIdle;
-(void)lockWhenReadyForMainThread;
-(void)promoteDeferredTaskIfIdle;
-(id)addAndReturnTask:(/*^block*/id)arg1 ;
-(void)waitUntilTaskIsFinished:(id)arg1 ;
@end

