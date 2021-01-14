/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFailureError:(NSError *)arg1 ;
-(BOOL)isComplete;
-(BOOL)sendCompletion;
-(NSMutableArray *)observers;
-(id)init;
-(NSMutableArray *)queuedResults;
-(id)initWithObservers:(id)arg1 ;
-(void)setSendMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithObserver:(id)arg1 behavior:(unsigned long long)arg2 ;
-(unsigned long long)behavior;
-(void)setLogKey:(NSString *)arg1 ;
-(void)subscribe:(id)arg1 ;
-(void)setQueuedResults:(NSMutableArray *)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
-(NSConditionLock *)stateLock;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(BOOL)_isComplete;
-(void)unsubscribe:(id)arg1 ;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 ;
-(void)unsubscribeAll;
-(NSError *)failureError;
-(BOOL)sendResult:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)sendMessageQueue;
-(BOOL)cancel;
-(BOOL)sendFailure:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isCancelled;
-(id)initWithObservers:(id)arg1 behavior:(unsigned long long)arg2 ;
-(NSString *)logKey;
@end

