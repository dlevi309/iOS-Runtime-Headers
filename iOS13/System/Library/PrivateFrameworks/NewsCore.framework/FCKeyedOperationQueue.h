/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCKeyedOperationQueueDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSOrderedSet;

@interface FCKeyedOperationQueue : NSObject {

	BOOL _suspended;
	id<FCKeyedOperationQueueDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _executionQueue;
	NSMutableOrderedSet* _mutableKeyQueue;
	NSMutableSet* _keysForExecutingOperations;
	long long _maxConcurrentOperationCount;
	NSMutableDictionary* _cancelHandlersByKey;
	NSObject*<OS_dispatch_group> _operationExecutionGroup;

}

@property (assign,nonatomic,__weak) id<FCKeyedOperationQueueDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * mutableKeyQueue;                             //@synthesize mutableKeyQueue=_mutableKeyQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * keysForExecutingOperations;                         //@synthesize keysForExecutingOperations=_keysForExecutingOperations - In the implementation block
@property (assign,nonatomic) long long maxConcurrentOperationCount;                             //@synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cancelHandlersByKey;                         //@synthesize cancelHandlersByKey=_cancelHandlersByKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> operationExecutionGroup;              //@synthesize operationExecutionGroup=_operationExecutionGroup - In the implementation block
@property (nonatomic,copy) NSOrderedSet * keyQueue; 
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                 //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;                       //@synthesize executionQueue=_executionQueue - In the implementation block
-(id)init;
-(id<FCKeyedOperationQueueDelegate>)delegate;
-(void)setDelegate:(id<FCKeyedOperationQueueDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(long long)maxConcurrentOperationCount;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(BOOL)isSuspended;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(long long)arg2 ;
-(void)setKeyQueue:(NSOrderedSet *)arg1 ;
-(void)notifyWhenAllOperationsAreFinishedUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableOrderedSet *)mutableKeyQueue;
-(void)_cancelOperationsIfNeeded;
-(void)_enqueueOperationIfNeeded;
-(NSObject*<OS_dispatch_group>)operationExecutionGroup;
-(NSMutableDictionary *)cancelHandlersByKey;
-(NSMutableSet *)keysForExecutingOperations;
-(NSOrderedSet *)keyQueue;
-(void)setMutableKeyQueue:(NSMutableOrderedSet *)arg1 ;
-(void)setKeysForExecutingOperations:(NSMutableSet *)arg1 ;
-(void)setCancelHandlersByKey:(NSMutableDictionary *)arg1 ;
-(void)setOperationExecutionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

