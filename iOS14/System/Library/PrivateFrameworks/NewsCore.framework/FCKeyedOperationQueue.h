/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(long long)maxConcurrentOperationCount;
-(BOOL)isSuspended;
-(NSMutableSet *)keysForExecutingOperations;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(id<FCKeyedOperationQueueDelegate>)delegate;
-(void)setKeysForExecutingOperations:(NSMutableSet *)arg1 ;
-(void)setMutableKeyQueue:(NSMutableOrderedSet *)arg1 ;
-(void)setDelegate:(id<FCKeyedOperationQueueDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(long long)arg2 ;
-(NSMutableOrderedSet *)mutableKeyQueue;
-(NSMutableDictionary *)cancelHandlersByKey;
-(void)_enqueueOperationIfNeeded;
-(void)_cancelOperationsIfNeeded;
-(void)setOperationExecutionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)notifyWhenAllOperationsAreFinishedUsingBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)operationExecutionGroup;
-(void)setCancelHandlersByKey:(NSMutableDictionary *)arg1 ;
-(void)setKeyQueue:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)keyQueue;
@end

