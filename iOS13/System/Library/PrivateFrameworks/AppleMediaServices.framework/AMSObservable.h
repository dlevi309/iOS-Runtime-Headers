/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSError, NSString, NSMutableArray, NSObject, NSConditionLock;

@interface AMSObservable : NSObject {

	unsigned long long _behavior;
	NSError* _failureError;
	NSString* _logKey;
	NSMutableArray* _observers;
	NSMutableArray* _queuedResults;
	NSObject*<OS_dispatch_queue> _sendMessageQueue;
	NSConditionLock* _stateLock;

}

@property (nonatomic,readonly) unsigned long long behavior;                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) NSError * failureError;                                     //@synthesize failureError=_failureError - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                          //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedResults;                             //@synthesize queuedResults=_queuedResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sendMessageQueue;              //@synthesize sendMessageQueue=_sendMessageQueue - In the implementation block
@property (nonatomic,retain) NSConditionLock * stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(id)init;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isComplete;
-(NSError *)failureError;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(unsigned long long)behavior;
-(void)subscribe:(id)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(NSConditionLock *)stateLock;
-(BOOL)sendCompletion;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(BOOL)sendResult:(id)arg1 ;
-(void)unsubscribe:(id)arg1 ;
-(BOOL)sendFailure:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
-(id)initWithObserver:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)initWithObservers:(id)arg1 behavior:(unsigned long long)arg2 ;
-(BOOL)_isComplete;
-(NSObject*<OS_dispatch_queue>)sendMessageQueue;
-(void)setFailureError:(NSError *)arg1 ;
-(NSMutableArray *)queuedResults;
-(id)initWithObservers:(id)arg1 ;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 ;
-(void)unsubscribeAll;
-(void)setQueuedResults:(NSMutableArray *)arg1 ;
-(void)setSendMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateLock:(NSConditionLock *)arg1 ;
@end

