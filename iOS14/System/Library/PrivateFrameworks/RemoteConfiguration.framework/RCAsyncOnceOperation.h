/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/


@protocol OS_dispatch_group, RCOperationCancelingRCOperationPrioritizing;
@class NSObject, RCMutexLock;

@interface RCAsyncOnceOperation : NSObject {

	BOOL _finished;
	BOOL _succeeded;
	/*^block*/id _workBlock;
	unsigned long long _interest;
	NSObject*<OS_dispatch_group> _activeGroup;
	id<RCOperationCanceling><RCOperationPrioritizing> _activeOperation;
	long long _relativePriority;
	RCMutexLock* _lock;

}

@property (nonatomic,copy) id workBlock;                                                                     //@synthesize workBlock=_workBlock - In the implementation block
@property (assign,nonatomic) BOOL finished;                                                                  //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL succeeded;                                                                 //@synthesize succeeded=_succeeded - In the implementation block
@property (assign,nonatomic) unsigned long long interest;                                                    //@synthesize interest=_interest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeGroup;                                       //@synthesize activeGroup=_activeGroup - In the implementation block
@property (nonatomic,retain) id<RCOperationCanceling><RCOperationPrioritizing> activeOperation;              //@synthesize activeOperation=_activeOperation - In the implementation block
@property (assign,nonatomic) long long relativePriority;                                                     //@synthesize relativePriority=_relativePriority - In the implementation block
@property (nonatomic,retain) RCMutexLock * lock;                                                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) BOOL finishedExecuting; 
@property (nonatomic,readonly) BOOL finishedExecutingWithFailure; 
-(void)setWorkBlock:(id)arg1 ;
-(BOOL)succeeded;
-(BOOL)finished;
-(void)setActiveGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id<RCOperationCanceling><RCOperationPrioritizing>)activeOperation;
-(id)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)finishedExecuting;
-(RCMutexLock *)lock;
-(void)setRelativePriority:(long long)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(long long)relativePriority;
-(void)setLock:(RCMutexLock *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)activeGroup;
-(id)workBlock;
-(void)setActiveOperation:(id<RCOperationCanceling><RCOperationPrioritizing>)arg1 ;
-(void)setInterest:(unsigned long long)arg1 ;
-(BOOL)finishedExecutingWithFailure;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(unsigned long long)interest;
-(void)setSucceeded:(BOOL)arg1 ;
@end

