/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol OS_dispatch_group, FCOperationCancelingFCOperationPrioritizing;
@class NSObject, NFMutexLock;

@interface FCAsyncOnceOperation : NSObject {

	BOOL _finished;
	BOOL _succeeded;
	/*^block*/id _workBlock;
	unsigned long long _interest;
	NSObject*<OS_dispatch_group> _activeGroup;
	id<FCOperationCanceling><FCOperationPrioritizing> _activeOperation;
	long long _relativePriority;
	NFMutexLock* _lock;

}

@property (nonatomic,copy) id workBlock;                                                                     //@synthesize workBlock=_workBlock - In the implementation block
@property (assign,nonatomic) BOOL finished;                                                                  //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL succeeded;                                                                 //@synthesize succeeded=_succeeded - In the implementation block
@property (assign,nonatomic) unsigned long long interest;                                                    //@synthesize interest=_interest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeGroup;                                       //@synthesize activeGroup=_activeGroup - In the implementation block
@property (nonatomic,retain) id<FCOperationCanceling><FCOperationPrioritizing> activeOperation;              //@synthesize activeOperation=_activeOperation - In the implementation block
@property (assign,nonatomic) long long relativePriority;                                                     //@synthesize relativePriority=_relativePriority - In the implementation block
@property (nonatomic,retain) NFMutexLock * lock;                                                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) BOOL finishedExecuting; 
@property (nonatomic,readonly) BOOL finishedExecutingWithFailure; 
-(NFMutexLock *)lock;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setLock:(NFMutexLock *)arg1 ;
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(BOOL)succeeded;
-(void)setSucceeded:(BOOL)arg1 ;
-(unsigned long long)interest;
-(void)setInterest:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_group>)activeGroup;
-(id<FCOperationCanceling><FCOperationPrioritizing>)activeOperation;
-(void)setActiveGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)workBlock;
-(void)setActiveOperation:(id<FCOperationCanceling><FCOperationPrioritizing>)arg1 ;
-(void)setWorkBlock:(id)arg1 ;
-(id)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)finishedExecuting;
-(BOOL)finishedExecutingWithFailure;
@end

